void start_sms()
{
  Serial.println("AT+CNMI=2,2,0,0,0");
  delay(1000);
  Serial.println("AT+CMGF=1");
  delay(500);      
  Serial.write("AT+CSMP=17,167,0,0\r\n");        
  Serial.println("AT+CMGS=\"+919284563224\"\r");   
  delay(100);
  Serial.println("\nSystem is ready.\r");   
  delay(100);
  Serial.write(0x1A);
  delay(1000);delay(1000);
  Serial.println("AT+CNMI=2,2,0,0,0");
  delay(1000);
  Serial.println("AT+CMGF=1");
  delay(500);  
  Serial.write("AT+CMGS=\"+919130749360\"\r");    
  delay(100);
  Serial.println("\nSystem is ready.\r");   
  delay(100);
  Serial.write(0x1A);
  delay(1000);delay(1000);
}


void activate_sms()
{
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n");        
    Serial.println("AT+CMGS=\"+919284563224\"\r");   
    delay(100);         
    Serial.write("\nMotor is activated.\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n"); 
    Serial.write("AT+CMGS=\"+919130749360\"\r");    
    delay(100);
    Serial.write("\n\nMotor is activated.\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
}


void deactivate_sms()
{ 
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n");          
    Serial.write("AT+CMGS=\"+919284563224\"\r");   
    delay(100);
    Serial.write("\nMotor is Deactivated.\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n"); 
    Serial.write("AT+CMGS=\"+919130749360\"\r");    
    delay(100);
    Serial.write("\nMotor is Deactivated.\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
}


void soilSMS1()
{ 
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n");          
    Serial.write("AT+CMGS=\"+919284563224\"\r");   
    delay(100);
    Serial.write("\nMotor is activated due to insufficient soil moisture level\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n"); 
    Serial.write("AT+CMGS=\"+919130749360\"\r");    
    delay(100);
    Serial.write("\nMotor is activated due to insufficient soil moisture level\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
}


void soilSMS2()
{ 
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n");          
    Serial.write("AT+CMGS=\"+919284563224\"\r");   
    delay(100);
    Serial.write("\nMoisture level of soil is Sufficient. Motor is Deactivated.\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
    Serial.println("AT+CNMI=2,2,0,0,0");
    delay(1000);
    Serial.println("AT+CMGF=1");
    delay(500);      
    Serial.write("AT+CSMP=17,167,0,0\r\n"); 
    Serial.write("AT+CMGS=\"+919130749360\"\r");    
    delay(100);
    Serial.write("\nMoisture level of soil is Sufficient. Motor is Deactivated.\r");   
    delay(100);
    Serial.write(0x1A);
    delay(1000);delay(1000);
}
