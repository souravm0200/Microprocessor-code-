#define R1_PIN 2
#define Y1_PIN 3
#define Y2_PIN 4
#define G1_PIN 5
#define G2_PIN 6
#define Y3_PIN 7
#define SWITCH 8
int LED_blink=700;
int switch_read;
int LED_sequence=1;


int delay_timer(int miliseconds)
{
int count = 0;
while (1)
{
if(TCNT0>=16)
{
TCNT0 =0;
count++;
if(count==miliseconds)
{
count=0;
break;
}
}
}
return 0;
}
void setup() {
pinMode(R1_PIN, OUTPUT);
pinMode(Y1_PIN, OUTPUT);
pinMode(Y2_PIN, OUTPUT);
pinMode(G1_PIN, OUTPUT);
pinMode(G2_PIN, OUTPUT);
pinMode(Y3_PIN, OUTPUT);
pinMode(SWITCH, INPUT);

TCCR0A=0b00000000;
TCCR0B=0b00000101;
TCNT0=0;
}


void loop() {
switch_read=digitalRead(SWITCH);
if (switch_read==LOW){
LED_sequence=!LED_sequence;
}

if (LED_sequence==1){

digitalWrite(R1_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(R1_PIN, LOW);



digitalWrite(Y1_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite (Y1_PIN, LOW);



digitalWrite(Y2_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(Y2_PIN, LOW);



digitalWrite(G1_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(G1_PIN, LOW);



digitalWrite(G2_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(G2_PIN, LOW);



digitalWrite(Y3_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(Y3_PIN, LOW);



delay_timer(LED_blink);
}

else {
digitalWrite(Y3_PIN, HIGH);
delay_timer (LED_blink);
digitalWrite(Y3_PIN, LOW);



digitalWrite(G2_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(G2_PIN, LOW);



digitalWrite(G1_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(G1_PIN, LOW);



digitalWrite(Y2_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(Y2_PIN, LOW);



digitalWrite(Y1_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(Y1_PIN, LOW);



digitalWrite(R1_PIN, HIGH);
delay_timer(LED_blink);
digitalWrite(R1_PIN, LOW);



delay_timer(LED_blink);
}
}