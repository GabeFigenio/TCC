#include <Arduino.h>
#include <vector>
#include "TesteFFT.h"
#include <stdio.h>
#include <math.h>
#include "arduinoFFT.h"

//==============I2C Macros 
// you shouldn't need to change these settings
#define SAMPLE_RATE 8000
//#define LEN 16384
//#define LENF 16322
#define LEN 24576
#define LENF 24514
#define LENDS 8192
#define HALFLEN 4096
#define SCL_INDEX 0x00
#define SCL_TIME 0x01
#define SCL_FREQUENCY 0x02
#define SCL_PLOT 0x03

//==============Other Macros 
#define LED 15
#define BUTTON 12

//==============Global variables

float vReal[HALFLEN];
float vImag[HALFLEN];


int16_t indx = 0;
bool botao = 0;
bool antbotao = 0;
bool flag;
float divisor;
float pred;
float pred2;
int16_t downsample = 2;

//long micTimer;
//int16_t micTotalTimer = 5000;

ArduinoFFT<float> FFT = ArduinoFFT<float>(vReal, vImag, HALFLEN, SAMPLE_RATE);


#define SAMPLE_BUFFER_SIZE 512


void setup()
{
  
  Serial.begin(115200);


  delay(500);

  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);

  //micTimer = millis();
  
}


void PrintVector(float *vData, uint16_t bufferSize, uint8_t scaleType)
{
  for (uint16_t i = 0; i < bufferSize; i++)
  {
    double abscissa;
    /* Print abscissa value */
    switch (scaleType)
    {
      case SCL_INDEX:
        abscissa = (i * 1.0);
	      break;
      case SCL_TIME:
        abscissa = ((i * 1.0) / SAMPLE_RATE);
        break;
      case SCL_FREQUENCY:
        abscissa = ((i * 1.0 * SAMPLE_RATE) / HALFLEN);
	      break;
    }
    if(scaleType!=SCL_PLOT)
    {
      Serial.print(abscissa, 6);
      if(scaleType==SCL_FREQUENCY)
        Serial.print("Hz");
      Serial.print(" ");
    }
    Serial.println(vData[i], 4);
  }
  Serial.println();
}



void loop()
{
  
  botao = digitalRead(BUTTON);
  
  if(botao && !antbotao && flag == 0)
  {
    flag = 1;/*
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);*/
  }
  
  antbotao = botao;
  
  

  if(flag)
  {

  flag = 0;
  
  for (uint16_t i = 0; i < HALFLEN; i++)
  {
    vReal[i] = sinal[LENDS/4+i];//Build data with positive and negative values
    vImag[i] = 0.0; //Imaginary part must be zeroed in case of looping to avoid wrong calculations and overflows
  }

  FFT.windowing(FFTWindow::Hamming, FFTDirection::Forward);	// Weigh data
  FFT.compute(FFTDirection::Forward); // Compute FFT
  FFT.complexToMagnitude(); // Compute magnitudes 

  PrintVector(vReal, HALFLEN>>1, SCL_PLOT);
  /*
  for(int16_t i=0;i<HALFLEN;i++)
  {
    Serial.println(vReal[i]);
  }*/

  
  }
}
