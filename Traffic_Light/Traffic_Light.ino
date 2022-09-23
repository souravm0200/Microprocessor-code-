#define RED_PIN 8
#define YELLOW_PIN 10
#define GREEN_PIN 12

int red_on = 3000;
int red_yellow_on = 1000;
int green_on = 3000;
int green_blink = 500;
int yellow_on = 1000;


void setup() {

//ports for connecting LEDs
pinMode(RED_PIN, OUTPUT);
pinMode(YELLOW_PIN, OUTPUT);
pinMode(GREEN_PIN, OUTPUT);

}

void loop() {

//turning on voltage at output red LED
digitalWrite(RED_PIN, HIGH);
//to make red LED on
delay(red_on);

//to turn yellow LED on
digitalWrite(YELLOW_PIN, HIGH);
delay(red_yellow_on);

//turning off RED_PIN and YELLOW_PIN, and turrning on greenLEd
digitalWrite(RED_PIN, LOW);
digitalWrite(YELLOW_PIN, LOW);
digitalWrite(GREEN_PIN, HIGH);
delay(green_on);
digitalWrite(GREEN_PIN, LOW);

//for turning green Led on and off for 3 times
for(int i = 0; i < 3; i = i+1)
{

delay(green_blink);
digitalWrite(GREEN_PIN, HIGH);
delay(green_blink);
digitalWrite(GREEN_PIN, LOW);

}

//for turning on yellow LED
digitalWrite(YELLOW_PIN, HIGH);
delay(yellow_on);
digitalWrite(YELLOW_PIN, LOW);

}




