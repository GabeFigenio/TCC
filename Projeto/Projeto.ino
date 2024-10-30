#include <Arduino.h>
#include <driver/i2s.h>
#include <stdio.h>
#include <math.h>
#include "arduinoFFT.h"
#include "libmfcc.h"
#include "variables.h"

//==============I2C Macros 
// you shouldn't need to change these settings
#define SAMPLE_BUFFER_SIZE 512
#define SAMPLE_RATE 8000

// most microphones will probably default to left channel but you may need to tie the L/R pin low
#define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_LEFT
// either wire your microphone to the same pins or change these to match your wiring
#define I2S_MIC_SERIAL_CLOCK 33
#define I2S_MIC_LEFT_RIGHT_CLOCK 25
#define I2S_MIC_SERIAL_DATA 32

#define LEN 4096

//==============Other Macros 
#define LED 15
#define BUTTON 26

//==============Global variables
int16_t raw_samples[SAMPLE_BUFFER_SIZE];
//float features[LEN];
//float features[4096];

int indx = 0;
unsigned int coeff;
bool botao = 0;
bool antbotao = 0;

double vReal[LEN];
double vImag[LEN];

ArduinoFFT<double> FFT = ArduinoFFT<double>(vReal, vImag, LEN, SAMPLE_RATE);

#define SCL_INDEX 0x00
#define SCL_TIME 0x01
#define SCL_FREQUENCY 0x02
#define SCL_PLOT 0x03


i2s_config_t i2s_config = 
{
  .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_RX),
  .sample_rate = SAMPLE_RATE,
  .bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT,
  .channel_format = I2S_CHANNEL_FMT_ONLY_LEFT,
  .communication_format = I2S_COMM_FORMAT_I2S,
  .intr_alloc_flags = ESP_INTR_FLAG_LEVEL1,
  .dma_buf_count = 2,
  .dma_buf_len = 1024,
  .use_apll = false,
  .tx_desc_auto_clear = false,
  .fixed_mclk = 0
};

i2s_pin_config_t i2s_mic_pins = 
{
  .bck_io_num = I2S_MIC_SERIAL_CLOCK,
  .ws_io_num = I2S_MIC_LEFT_RIGHT_CLOCK,
  .data_out_num = I2S_PIN_NO_CHANGE,
  .data_in_num = I2S_MIC_SERIAL_DATA
};


void setup()
{
  
  Serial.begin(115200);

  i2s_driver_install(I2S_NUM_0, &i2s_config, 0, NULL);
  i2s_set_pin(I2S_NUM_0, &i2s_mic_pins);
  i2s_start(I2S_NUM_0);

  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  
}

void loop()
{
  /*
  // Escutar com o microfone=================================================================================
  size_t bytes_read = 0;
  i2s_read(I2S_NUM_0, raw_samples, sizeof(int16_t) * SAMPLE_BUFFER_SIZE, &bytes_read, portMAX_DELAY);
  int samples_read = bytes_read / sizeof(int16_t);
  
  // Agrupar várias amostras=================================================================================
  for(int i=0; i<samples_read; i++)
  {
    features[i+indx] = float(raw_samples[i]);
  }
  indx += samples_read;
  
  
  // Quando fechar o conjunto de amostras====================================================================
  if(indx >= LEN)
  {*/

  botao = digitalRead(BUTTON);

  if(botao && !antbotao)
  {
    indx = 0;

    int tamanho = sizeof(features) / sizeof(features[0]);

    // Variáveis de cálculo
    float soma = 0.0, somaQuadrados = 0.0;
    float maxAbs, maior = features[0], menor = features[0];
    float somaAbsoluta = 0.0, somaQuadradoAbsoluto = 0.0, somaRaiz = 0.0;
    int cruzamentosZero = 0;

    // Primeiro loop: calcular média, soma dos quadrados, maior/menor valor, cruzamentos de zero e soma dos valores absolutos
    for (int i = 0; i < tamanho; i++) {
        float valor = features[i];
        
        // Soma para a média
        soma += valor;

        // Soma absoluta para Shape e Impulse Factor
        somaAbsoluta += fabs(valor);

        // Soma dos quadrados para RMS e Power
        somaQuadrados += valor * valor;
        somaQuadradoAbsoluto += fabs(valor) * fabs(valor);
        
        //Soma das raizes
        somaRaiz += sqrt(fabs(valor));

        // Maior e menor valor
        if (valor > maior) maior = valor;
        if (valor < menor) menor = valor;

        // Contar cruzamentos de zero
        if (i > 0 && ((features[i - 1] > 0 && valor < 0) || (features[i - 1] < 0 && valor > 0))) {
            cruzamentosZero++;
        }
    }

    //Calcular máximo absolutos
    if (fabs(menor) > fabs(maior))
    {
        maxAbs = fabs(menor);
    } 
    else
    {
        maxAbs = fabs(maior);
    }
    
    // Calcular média
    float media = soma / tamanho;

    // Calcular variância e desvio padrão
    float variancia = (somaQuadrados / tamanho) - (media * media);
    float desvioPadrao = sqrt(variancia);

    // Calcular RMS
    float rms = sqrt(somaQuadrados / tamanho);

    // Calcular Power
    float power = somaQuadrados / tamanho;

    // Calcular Crest Factor
    float crestFactor = maxAbs / rms;

    // Calcular Shape Factor
    float shapeFactor = rms / (somaAbsoluta / tamanho); 

    // Calcular Impulse Factor
    float impulseFactor = maxAbs / (somaAbsoluta / tamanho); 

    // Calcular Clearance Factor
    float clearanceFactor = maxAbs / pow(somaRaiz / tamanho,2);

    // Variáveis para Kurtosis e Skewness
    float somaCubos = 0.0, somaQuartaPotencia = 0.0;

    // Segundo loop: calcular soma dos cubos e quarta potência para Kurtosis e Skewness
    for (int i = 0; i < tamanho; i++) {
        float valor = features[i];
        somaCubos += pow(valor - media, 3);            // Soma dos cubos para Skewness
        somaQuartaPotencia += pow(valor - media, 4);   // Soma da quarta potência para Kurtosis
    }

    // Calcular Kurtosis
    float kurtosis = (somaQuartaPotencia / tamanho) / pow(rms, 4) - 3;

    // Calcular Skewness
    float skewness = (somaCubos / tamanho) / pow(rms, 3);

    // Diferença entre maior e menor valor
    float diferencaMaiorMenor = maior - menor;

    
    for (uint16_t i = 0; i < tamanho; i++)
    {
      vReal[i] = features[i];//Build data with positive and negative values
      vImag[i] = 0.0; //Imaginary part must be zeroed in case of looping to avoid wrong calculations and overflows
    }

    FFT.windowing(FFTWindow::Hamming, FFTDirection::Forward);	// Weigh data
    FFT.compute(FFTDirection::Forward); // Compute FFT
    FFT.complexToMagnitude(); // Compute magnitudes 
    


    /*
    //Print FFT
    for (uint16_t i = 0; i < LEN; i++)
    {
      if(i == 0)
      {
        Serial.print("[");
      }
      Serial.print(vReal[i],15);

      if(i<(LEN-1))
      {
        if (i == (LEN/3) ||i == (2*LEN/3) || i == (LEN/2))
        {
          Serial.println(",");
        }
        else
        {
          Serial.print(", ");
        }
      }
      else
      {
        Serial.print("]");
      }
      
      Serial.print(((i * 1.0 * SAMPLE_RATE) / LEN));
      Serial.print(" ");
      Serial.println(vReal[i], 4);
    }
   
    
    for(unsigned int coeff = 0; coeff < 5; coeff++)
    {
      double mfcc_result = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, coeff);
      Serial.print(coeff);
      Serial.print("  ");
      Serial.println(mfcc_result);
    }*/
    


    
    double mfcc1 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 0);
    double mfcc2 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 1);
    double mfcc3 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 2);
    double mfcc4 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 3);
    double mfcc5 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 4);
    
    
    
    // Exibir resultados
    Serial.print(media, 6);
    Serial.print(", ");
    Serial.print(maior, 6);
    Serial.print(", ");
    Serial.print(maxAbs, 6);
    Serial.print(", ");
    Serial.print(diferencaMaiorMenor, 6);
    Serial.print(", ");
    Serial.print(rms, 6);
    Serial.print(", ");
    Serial.print(variancia, 6);
    Serial.print(", ");
    Serial.print(desvioPadrao, 6);
    Serial.print(", ");
    Serial.print(power, 6);
    Serial.print(", ");
    Serial.print(crestFactor, 6);
    Serial.print(", ");
    Serial.print(shapeFactor, 6);
    Serial.print(", ");
    Serial.print(impulseFactor, 6);
    Serial.print(", ");
    Serial.print(kurtosis, 6);
    Serial.print(", ");
    Serial.print(skewness, 6);
    Serial.print(", ");
    Serial.print(clearanceFactor, 6);
    Serial.print(", ");
    Serial.print(cruzamentosZero);
    Serial.print(", ");
    Serial.print(mfcc1, 6);
    Serial.print(", ");
    Serial.print(mfcc2, 6);
    Serial.print(", ");
    Serial.print(mfcc3, 6);
    Serial.print(", ");
    Serial.print(mfcc4, 6);
    Serial.print(", ");
    Serial.println(mfcc5, 6);

  }
  antbotao = botao;
}
