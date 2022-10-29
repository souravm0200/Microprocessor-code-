#define RED_PIN 8 //define name of pins used
#define YELLOW_PIN 10
#define GREEN_PIN 12
//define the delays for each traffic light color
int red_on = 3000; //3s delay
int red_yellow_on = 1000; //1s delay
int green_on = 3000; //3s delay
int green_blink = 5000; //.5s delay
int yellow_on = 1000; //1s delay

int delay_timer(int milliseconds)
{
 int count =0;
while(1)
{
 if(TCNT0>=16)
{
  TCNT0=0;
  count++;
break;    
 if(count==milliseconds)
{
 count=0;
 break; 
} 
} 
}      
return 0;
}



void setup() {
//define pins connected to LEDs as outputs
pinMode(RED_PIN, OUTPUT);
pinMode(YELLOW_PIN, OUTPUT);
pinMode(GREEN_PIN, OUTPUT);
//set up timer
TCCR0A = 0b00000000;
TCCR0B =0b00000101; //setting pre-scaler for timer clock
TCNT0=0;
}

void loop()
 {
   
//to make red LED on
digitalWrite(RED_PIN, HIGH);
delay_timer(red_on);
//to turn yellow LED on
digitalWrite(YELLOW_PIN, HIGH);
delay_timer(red_yellow_on);
//turning off RED_PIN and YELLOW_PIN, and turning on greenLED
digitalWrite(RED_PIN, LOW);
digitalWrite(YELLOW_PIN, LOW);
digitalWrite(GREEN_PIN, HIGH);
delay_timer(green_on);
digitalWrite(GREEN_PIN, LOW);
//for turning green Led on and off for 3 times
for(int i = 0; i < 3; i = i+1)
{
delay_timer(green_blink);
digitalWrite(GREEN_PIN, HIGH);
delay_timer(green_blink);
digitalWrite(GREEN_PIN, LOW);
}
//for turning on yellow LED
digitalWrite(YELLOW_PIN, HIGH);
delay_timer(yellow_on);
digitalWrite(YELLOW_PIN, LOW);
}