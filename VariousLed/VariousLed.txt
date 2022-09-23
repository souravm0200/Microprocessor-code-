    int timer = 500;             
    int LEDPins[] = {13, 12, 8, 4, 2};       // an array of declared pin numbers on the board  
    int countOFpin = 6;           // the number of arrays  

    void setup()   
    {  
      // we have declared an array to intialize the LED pins as OUTPUT  
      for (int PIN = 0; PIN < countOFpin; PIN= PIN + 1)   
    {  
        pinMode(LEDPins[PIN], OUTPUT);  
      }  
    }  


    void loop()  
     {  
      // loop starting from the lowest pin in the array to the highest:  
      for (int PIN = 0; PIN < countOFpin; PIN++) {  

        // turns the pin ON:  
        digitalWrite(LEDPins[PIN], HIGH);  
        delay(timer);  
        // turnS the pin OFF:  
        digitalWrite(LEDPins[PIN], LOW);  

      }  
      
      // loop from the highest pin in the array to the lowest:   
      // It means the LEDs will light in the reverse direction as used above  
      
      for (int PIN = countOFpin - 1; PIN >= 0; PIN- -)  
     {   
        digitalWrite(LEDPins[PIN], HIGH);  
        delay(timer);  
        digitalWrite(LEDPins[PIN], LOW);  
        // We can also specify the time inside the delay( ) instead of the delcaring the timer  
      }  
    }  




