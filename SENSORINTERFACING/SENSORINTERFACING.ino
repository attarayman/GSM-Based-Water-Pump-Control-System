#include "SERIALSMS.h"
#include "SOILMOISTURE.h"


char str[20];
int temp=0;
int power_led = 9;

int i=0;
int j=0;

void setup()
{
  pinMode(power_led,OUTPUT);
  digitalWrite(power_led,HIGH);
  Serial.begin(9600);
  pinMode(pump,OUTPUT);
  pinMode(LED,OUTPUT);
  digitalWrite(pump,LOW);
  digitalWrite(LED,LOW);
  delay(20000);
  start_sms();
  delay(20000);
}


void loop()
{
 Serial.print("Mositure : ");
 Serial.print(output_value);
 Serial.println("%");
 if(temp==1)
   {
      check();
      temp=0;
      i=0;
      delay(1000);   
   }
 soilMoisture();
 temp = 0;
}


void serialEvent()
{
  while(Serial.available())
  {
    if(Serial.find('/'))
    {
      delay(1000);
      while (Serial.available())
      {
        char inChar=Serial.read();
        str[i++]=inChar;
        if(inChar=='/')
        {
          temp=1;
          return;
        }
      }
    }
  }
}

void check()
{
  
  if(!(strncmp(str,"motor on",8)))
  {   
   
    digitalWrite(pump,HIGH);
    digitalWrite(LED,HIGH);
    activate_sms();
    delay(1000);
 
    motor_on = 1;     
  }
  else if(!(strncmp(str,"motor off",9)))
  {
    digitalWrite(pump,LOW);
    digitalWrite(LED,LOW);
    deactivate_sms();
    delay(1000);
  }
  
}
