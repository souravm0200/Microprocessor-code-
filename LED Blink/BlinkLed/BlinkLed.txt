void setup() {
   
   pinMode(5,OUTPUT); //Define digital output number 
  

}

void loop() {

  digitalWrite(5,HIGH); 
  delay(500); //the led will be 0.5 sec on
  digitalWrite(5,Low);
  delay(500); //turn off for 0.5 sec 
  

}
