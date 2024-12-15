#include <Arduino.h>
#include <vector>
#include "model.h"
#include "model2.h"
#include "Filtro.h"
#include <driver/i2s.h>
#include <stdio.h>
#include <math.h>
#include "arduinoFFT.h"
#include "libmfcc.h"

//==============I2C Macros 
// you shouldn't need to change these settings
#define SAMPLE_RATE 8000
//#define LEN 16384
//#define LENF 16322
#define LEN 24576
#define LENF 24514
#define LENDS 8192
#define HALFLEN 4096

// most microphones will probably default to left channel but you may need to tie the L/R pin low
#define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_LEFT
// either wire your microphone to the same pins or change these to match your wiring
#define I2S_MIC_SERIAL_CLOCK 33
#define I2S_MIC_LEFT_RIGHT_CLOCK 25
#define I2S_MIC_SERIAL_DATA 32


//==============Other Macros 
#define LED 15
#define BUTTON 12

//==============Global variables

float sinal[LEN];
double vReal[HALFLEN];
double vImag[HALFLEN];


int16_t indx = 0;
bool botao = 0;
bool antbotao = 0;
bool flag;
int limit = 100000000;
float divisor;
float pred;
float pred2;
int16_t downsample = 2;

//long micTimer;
//int16_t micTotalTimer = 5000;

ArduinoFFT<double> FFT = ArduinoFFT<double>(vReal, vImag, HALFLEN, SAMPLE_RATE);


#define SAMPLE_BUFFER_SIZE 512
int32_t raw_samples[SAMPLE_BUFFER_SIZE];
i2s_config_t i2s_config = 
{
  .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_RX),
  .sample_rate = SAMPLE_RATE*downsample,
  .bits_per_sample = I2S_BITS_PER_SAMPLE_32BIT,
  .channel_format = I2S_CHANNEL_FMT_ONLY_LEFT,
  .communication_format = I2S_COMM_FORMAT_I2S,
  .intr_alloc_flags = ESP_INTR_FLAG_LEVEL1,
  .dma_buf_count = 4,
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

  delay(500);

  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);

  //micTimer = millis();
  
}

void loop()
{
  
  botao = digitalRead(BUTTON);
  /*
  if(botao && !antbotao && flag == 0)
  {
    flag = 1;
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
  }
  
  antbotao = botao;*/
  
  
  /*
  if(millis() - micTimer > micTotalTimer && !flag)
  {
    micTimer = millis();
    flag = 1;
  }*/

  if(flag)
  {
  // Escutar com o microfone=================================================================================
  size_t bytes_read = 0;
  i2s_read(I2S_NUM_0, raw_samples, sizeof(int32_t) * SAMPLE_BUFFER_SIZE, &bytes_read, portMAX_DELAY);
  int16_t samples_read = bytes_read / sizeof(int32_t);

  
        
  // Agrupar várias amostras=================================================================================

  for(int16_t i=0; i<samples_read; i++)
  {
    sinal[i+indx] = float(raw_samples[i]);
  }
  indx += samples_read;
  }
  
  // Quando fechar o conjunto de amostras====================================================================
  
  if(indx >= LEN)
  {
    digitalWrite(LED,LOW);

    indx = 0;
    flag = 0;

    // Normalizar audio========================================================================================
    float bigger = 0;
    for (int16_t i = 0; i < LEN; i++) 
    {
      if (sinal[i] > bigger) bigger = sinal[i];
    }

    if(bigger > limit)
    {
      divisor = bigger*1.2;
    }
    else
    {
      divisor = limit;
    }

    for (int16_t i=0; i < LEN; i++) 
    {
      sinal[i] = sinal[i]/divisor;
      //Serial.println(sinal[i],12);
    }

    //Filtro
    for(int16_t i=0;i<(LENF);i++)
    {
        float aux = 0;
        for(int16_t j = 0;j<lenFiltro;j++)
        {
            aux = aux + (Filtro[lenFiltro-j-1] * sinal[j+i]);
        }
        sinal[i] = aux; 
    }
    
    //Downsample
    int16_t c = 0;
    for(int16_t i=0; i<LENF; i++)
    {
      if(i % downsample == 0)
      {
        sinal[c] = sinal[i];
        //Serial.println(sinal[c],12);
        c++;
      }
    }
  
    
    

    /*
    // Variáveis de cálculo
    float soma = 0.0, somaQuadrados = 0.0;
    float maxAbs, maior = sinal[0], menor = sinal[0];
    float somaAbsoluta = 0.0, somaQuadradoAbsoluto = 0.0, somaRaiz = 0.0;
    int16_t cruzamentosZero = 0;

    // Primeiro loop: calcular média, soma dos quadrados, maior/menor valor, cruzamentos de zero e soma dos valores absolutos
    for (int16_t i = 0; i < LENDS; i++) {
        float valor = sinal[i];
        
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
        if (i > 0 && ((sinal[i - 1] > 0 && valor < 0) || (sinal[i - 1] < 0 && valor > 0))) {
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
    float media = soma / LENDS;

    // Calcular variância e desvio padrão
    float variancia = (somaQuadrados / LENDS) - (media * media);
    float desvioPadrao = sqrt(variancia);

    // Calcular RMS
    float rms = sqrt(somaQuadrados / LENDS);

    // Calcular Power
    float power = somaQuadrados / LENDS;

    // Calcular Crest Factor
    float crestFactor = maxAbs / rms;

    // Calcular Shape Factor
    float shapeFactor = rms / (somaAbsoluta / LENDS); 

    // Calcular Impulse Factor
    float impulseFactor = maxAbs / (somaAbsoluta / LENDS); 

    // Calcular Clearance Factor
    float clearanceFactor = maxAbs / pow(somaRaiz / LENDS,2);

    // Variáveis para Kurtosis e Skewness
    float somaCubos = 0.0, somaQuartaPotencia = 0.0;

    // Segundo loop: calcular soma dos cubos e quarta potência para Kurtosis e Skewness
    for (int16_t i = 0; i < HALFLEN; i++) {
        float valor = sinal[i];
        somaCubos += pow(valor - media, 3);            // Soma dos cubos para Skewness
        somaQuartaPotencia += pow(valor - media, 4);   // Soma da quarta potência para Kurtosis
    }

    // Calcular Kurtosis
    float kurtosis = (somaQuartaPotencia / LENDS) / pow(rms, 4) - 3;

    // Calcular Skewness
    float skewness = (somaCubos / LENDS) / pow(rms, 3);

    // Diferença entre maior e menor valor
    float diferencaMaiorMenor = maior - menor;

    
    for (uint16_t i = 0; i < HALFLEN; i++)
    {
      vReal[i] = sinal[LEN/4+i];//Build data with positive and negative values
      vImag[i] = 0.0; //Imaginary part must be zeroed in case of looping to avoid wrong calculations and overflows
    }
/*
    FFT.windowing(FFTWindow::Hamming, FFTDirection::Forward);	// Weigh data
    FFT.compute(FFTDirection::Forward); // Compute FFT
    FFT.complexToMagnitude(); // Compute magnitudes 

    double FunFreq = FFT.majorPeak();
    
    double mfcc1 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 0);
    double mfcc2 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 1);
    double mfcc3 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 2);
    double mfcc4 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 3);
    double mfcc5 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 4);
    double mfcc6 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 5);
    double mfcc7 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 6);
    double mfcc8 = GetCoefficient(vReal, SAMPLE_RATE, 48, 64, 7);
    

    //['Mean', 'MaxValue', 'RMS', 'CrestF', 'ShapeF', 'FundFreq', 'MFCC1', 'MFCC2', 'MFCC3', 'MFCC4', 'MFCC5']
    std::vector<double> entrada = {{media, maior, rms, crestFactor, shapeFactor, FunFreq, mfcc1, mfcc2, mfcc3, mfcc4, mfcc5}};
    //['Mean', 'MaxValue', 'Peak', 'PeakToPeak', 'RMS', 'Variance', 'DesvioPadrao', 'ShapeF', 'Skew', 'ZeroCross', 'FundFreq', 'MFCC1', 'MFCC2', 'MFCC3', 'MFCC4', 'MFCC5', 'MFCC6', 'MFCC7', 'MFCC8']
    std::vector<double> entrada2 = {{media, maior, maxAbs, diferencaMaiorMenor, rms, variancia, desvioPadrao, shapeFactor, skewness, cruzamentosZero, FunFreq, mfcc1, mfcc2, mfcc3, mfcc4, mfcc5, mfcc6, mfcc7, mfcc8}};
    
    pred = model(entrada);
    pred2 = model2(entrada2);

    /*
    if(pred == 0)
    {
      digitalWrite(LED,HIGH);
    }
    else
    {
      digitalWrite(LED,LOW);
    }

    
    if(pred2 == 0)
    {
      digitalWrite(LED2,HIGH);
    }
    else
    {
      digitalWrite(LED2,LOW);
    }*/

/*
    Serial.print(pred, 0);
    Serial.print(",");
    Serial.println(pred2, 0);*/
  }  
  
}
