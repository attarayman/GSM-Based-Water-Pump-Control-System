#define soilWet 500
#define soilDry 750

int LED = 3;
int pump = 4;

int motor_on = 0;

int sensor_pin = A0; // Soil Sensor input at Analog PIN A0
int output_value ;

void soilMoisture()
{
 output_value= analogRead(sensor_pin);
 output_value = map(output_value,550,10,0,100);
 Serial.print("Mositure : ");
 Serial.print(output_value);
 Serial.println("%");
 
 if(output_value<20){
  digitalWrite(pump, HIGH);
  digitalWrite(LED,HIGH);
  motor_on = 1;
  soilSMS1();
 }
 else
 {
  digitalWrite(pump, LOW);
  digitalWrite(LED,LOW);
  motor_on = 0;
  soilSMS2();
 }
 delay(1000);
}
