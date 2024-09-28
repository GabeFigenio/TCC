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
