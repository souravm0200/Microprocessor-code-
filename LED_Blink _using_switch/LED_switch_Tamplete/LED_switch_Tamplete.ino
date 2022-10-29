#define RED_PIN 8
#define YELLOW_PIN 10
#define GREEN_PIN 12

int led_blink = 700;
int switch_read;
int led_sequence=1;
int switch1=9;

int delay_timer(int milliseconds)
{
  int count= 0;

  while(1)
  {
    if(TCNT0>=16)
    {
      TCNT0=0;
      count++;
      if(count==milliseconds)
      {
        count=0;
        break;
      }
    }

  }
  return 0;
}

void setup()
{
  pinMode(RED_PIN,OUTPUT);
  pinMode(YELLOW_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);

  TCCR0A=0b00000000;
  TCCR0B=0b00000101;
  TCNT0=0;
}

void loop()
{
  switch_read=digitalRead(switch1);
  if(switch_read==LOW)
  {
    led_sequence!=led_sequence;
  }

  if(led_sequence==1)
  {

  }

  else
  {

  }

}

