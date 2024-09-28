/*
//Inclues=======================================================
#include <stdio.h>
#include <driver/i2s.h>
#include "model.h"
#include <tflm_esp32.h>
#include <eloquent_tinyml.h>
#include "mic.h"
#include <math.h>


//Defines=======================================================
#define LED 15
#define BUTTON 26
#define bufferLen 32

// Use I2S Processor 0
#define I2S_PORT I2S_NUM_0

#define ARENA_SIZE 10000

Eloquent::TF::Sequential<TF_NUM_OPS, ARENA_SIZE> tf;


//Variáveis====================================================
int16_t sBuffer[bufferLen];
int freq = 2500;
int seg = 1;
int janela = freq * seg;
int cont = 0;
long temp;
long temp2 = 0;
int rangelimit = 1;
float audio[2500];
bool botao = 0;
bool antbotao = 0;
float mean = 0;
bool flag = 0;
float trust = 0.89;


double sumMean = 0;
double sumAbsMean = 0;
double rms = 0;
double peak = 0;
double crestFactor;
double impulseFactor;
double shapeFactor;
double clearanceFactor = 0;
double desvioPadrao = 0;
double kurtosis = 0;
double kurtosis2 = 0;


//Funções======================================================
//Setup========================================================
void setup() 
{
    // Set up Serial Monitor
  Serial.begin(115200);

  delay(500);

  // Set up I2S
  i2s_install();
  i2s_setpin();
  i2s_start(I2S_PORT);

  delay(500);
  
  registerNetworkOps(tf);

  while (!tf.begin(model).isOk()) 
  {
    Serial.println(tf.exception.toString());
    delay(1000);
  }

  delay(500);
  
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);

  digitalWrite(LED, flag);

  temp = micros();
}



//Loop=========================================================
void loop() 
{
  
  if(micros() - temp >= 1000000/freq)
  {
    temp = micros();
    
    // Ler o microfone==========================================
    size_t bytesIn = 0;
    esp_err_t result = i2s_read(I2S_PORT, &sBuffer, bufferLen, &bytesIn, portMAX_DELAY);
    
    if (result == ESP_OK)
    {
      // Read I2S data buffer
      int16_t samples_read = bytesIn / 8;
      if (samples_read > 0) 
      {
        

        if(cont == 0)
        {
          sumMean = 0;
          sumAbsMean = 0;
          rms = 0;
          peak = 0;
          clearanceFactor = 0;
          desvioPadrao = 0;
          kurtosis = 0;
          kurtosis2 = 0;
        }
        
        //Ler aúdio==========================================
        mean = 0;
        for (int16_t i = 0; i < samples_read; ++i) {
          mean += (sBuffer[i]);
        }
        mean /= samples_read;
        audio[cont] = mean;
        //Ler aúdio==========================================

        
        //Calcular algumas features==========================
        if(fabs(audio[cont]) > peak)
        {
            peak = fabs(audio[cont]);
        }
        
        sumMean += audio[cont];
        sumAbsMean += fabs(audio[cont]);
        rms += audio[cont]*audio[cont];
        clearanceFactor += sqrt(fabs(audio[cont]));
        //Calcular algumas features==========================
        

        //Quando a janela de áudio acabar====================
        if(cont == janela)
        {
          temp2 = micros();

          int tamanho = sizeof(audio)/sizeof(audio[0]);

          //Calcular algumas features========================
          sumMean /= tamanho;
          for(int j=0; j<tamanho; j++)
          {
              desvioPadrao += (audio[j]-sumMean)*(audio[j]-sumMean);
              kurtosis += (audio[j]-sumMean)*(audio[j]-sumMean);
              kurtosis2 += (audio[j]-sumMean)*(audio[j]-sumMean)*(audio[j]-sumMean)*(audio[j]-sumMean);
          }

          kurtosis = (kurtosis/tamanho)*(kurtosis/tamanho);
          kurtosis2 = kurtosis2/tamanho;
          
          kurtosis = kurtosis2/kurtosis;
          
          sumAbsMean /= tamanho;
          
          rms = sqrt(rms/tamanho);
          crestFactor = peak/rms;
          impulseFactor = peak/sumAbsMean;
          shapeFactor = rms/sumAbsMean;
          clearanceFactor = peak/((clearanceFactor/tamanho)*(clearanceFactor/tamanho));
          desvioPadrao = sqrt(desvioPadrao/tamanho);
          //Calcular algumas features========================
        
          
          float entrada[8] = {crestFactor, rms, desvioPadrao, impulseFactor, shapeFactor, kurtosis, clearanceFactor, peak};
          //float entrada[5] = {crestFactor, impulseFactor, shapeFactor, kurtosis, clearanceFactor};
          //float entrada[1] = {crestFactor};

          
          if (!tf.predict(entrada).isOk())
          {
            Serial.println(tf.exception.toString());
          }
          
          
          float pred = tf.output(0);
          if(pred > trust){
            digitalWrite(LED, HIGH);
          }
          else
          {
            digitalWrite(LED, LOW);
          }
          /*
          Serial.print("Cf: ");
          Serial.print(crestFactor);
          Serial.print("; RMS: ");
          Serial.print(rms);
          Serial.print("; Std: ");
          Serial.print(desvioPadrao);
          Serial.print("; Imp: ");
          Serial.print(impulseFactor);
          Serial.print("; Sf: ");
          Serial.print(shapeFactor);
          Serial.print("; Kur: ");
          Serial.print(kurtosis);
          Serial.print("; Clear: ");
          Serial.print(clearanceFactor);
          Serial.print("; Peak: ");
          Serial.print(peak);
         
          Serial.print("Pred: "); 
          Serial.print(0);
          Serial.print(" ");
          Serial.print(1);
          Serial.print(" ");
          Serial.print(trust);
          Serial.print(" ");
          Serial.println(pred);
          
          cont = -1;
        }
        //Quando a janela de áudio acabar====================
      }
    }
    cont++;
  }
}
*/













//Inclues=======================================================
#include <stdio.h>
#include <driver/i2s.h>
#include "mic.h"
#include <math.h>
#include "Adafruit_ZeroFFT.h"

//Defines=======================================================
#define LED 15
#define BUTTON 26
#define bufferLen 32

// Use I2S Processor 0
#define I2S_PORT I2S_NUM_0


//Variáveis====================================================
int16_t sBuffer[bufferLen];
int freq = 40000;
int seg = 1;
int janela = freq * seg;
int cont = 0;
long temp;
long temp2 = 0;
int rangelimit = 1;
bool botao = 0;
bool antbotao = 0;
float mean = 0;
bool flag = 0;



//Funções======================================================
//Setup========================================================
void setup() 
{
    // Set up Serial Monitor
  Serial.begin(115200);

  delay(500);

  // Set up I2S
  i2s_install();
  i2s_setpin();
  i2s_start(I2S_PORT);

  delay(500);
  
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);

  digitalWrite(LED, flag);

  temp = micros();
}



//Loop=========================================================
void loop() 
{

  botao = digitalRead(BUTTON);

  if(botao && !antbotao)
  {
    if(!flag)
    {
      delay(500);
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED, LOW);
      
      delay(500);
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED, LOW);
      
      delay(500);
      digitalWrite(LED, HIGH);
    }
    else
    {
      digitalWrite(LED, LOW);
    }

    flag = !flag;
  }
  antbotao = botao;
    

  if(flag)
  {

    if(micros() - temp >= 1000000/freq)
    {

      temp = micros();
      
      // Ler o microfone==========================================
      size_t bytesIn = 0;
      esp_err_t result = i2s_read(I2S_PORT, &sBuffer, bufferLen, &bytesIn, portMAX_DELAY);
      
      if (result == ESP_OK)
      {
        // Read I2S data buffer
        int16_t samples_read = bytesIn / 8;
        if (samples_read > 0) 
        {
          
          //Ler aúdio==========================================
          mean = 0;
          for (int16_t i = 0; i < samples_read; ++i) {
            mean += (sBuffer[i]);
          }
          mean /= samples_read;
          //Ler aúdio==========================================

          Serial.println(mean);
          
          
        }
      }
    }

  }

}
