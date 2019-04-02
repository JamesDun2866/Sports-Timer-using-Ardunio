#include <TimerOne.h>

int first_digit = 0;
int second_digit = 0;
int third_digit = 0;
int fourth_digit = 0;
int n = 6000;
int D1 = 5;
int D2 = 6;
int D3 = 7;
int D4 = 8;
int clk = 4;
int latch = 3;
int data = 2;
int Digitcount = 0;
int digits[4] ;
int Ds[4] = {5, 6, 7, 8};
int ButtonResetpin = A0;
int ButtonStartStopPin = A1;
int buttonpush = 1;
int laststate = 0;
int ButtonStartStopState = 0;
int ButtonResetState = 0;
int motorPin1 = 9;
int motorPin2 = 10;
int motorPin3 = 11;
int motorPin4 = 12;
int motorSpeed = 1200;
int motorCount = 0;
int countsperrev = 512;
int lookup[8] = {B01000, B01100, B00100, B00110, B00010, B00011, B00001, B01001};
int buzzerpin = 13;
int PhotocellPin = A2;
byte numbers[10] {B11111100, B01100000, B11011010, B11110010, B01100110, B10110110, B10111110, B11100000, B11111110, B11110110};
bool paused = false;
int decimalpointpin = A4;

void setup() {
  Timer1.initialize (10000);
  Timer1.attachInterrupt(minus);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(data, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode (ButtonResetpin, INPUT);
  pinMode (ButtonStartStopPin, INPUT);
  Serial.begin (9600);
  pinMode (decimalpointpin, OUTPUT);


}

void loop()
{
  int lightlevel = analogRead (PhotocellPin);
  Serial.println(lightlevel);

  if (lightlevel > 400)
  {
    paused = true;
  }
  else
  {
    paused = false;
  }

  selectnum(n);
  displaynums();

}

void selectnum(long num) { // seperate the input number into 4 single digits

  first_digit = num / 1000;
  digits[0] = first_digit;
  int first_left = num - (first_digit * 1000);
  second_digit = first_left / 100;
  digits[1] = second_digit;
  int second_left = first_left - (second_digit * 100);
  third_digit = second_left / 10;
  digits[2] = third_digit;
  fourth_digit = second_left - (third_digit * 10);
  digits[3] = fourth_digit;

}

void displaynums() { //scanning

  blank(); //black screen
  digitalWrite(latch, LOW); //put the shift register to read
  shiftOut(data, clk, LSBFIRST, numbers[digits[Digitcount]]); //send the data
  digitalWrite(Ds[Digitcount], LOW); //turn on the relevent digit
  digitalWrite(latch, HIGH); //put the shift register to write mode
  Digitcount++; //count up the digit
  delay (5);

  if (Digitcount == 4)
  {
    Digitcount = 0;
  }
}

void blank() { //turn off all 4 digits
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}
void add()
{

  startstopbutton();
  if (paused == false)
  {
    if (buttonpush % 2 != 1) // fiqures out what state the button is in
    {
      n++;
      if (n == 6001)
      {
        Timer1.detachInterrupt();
        Timer1.attachInterrupt (minus);
      }
    }
  }

  ButtonResetState = digitalRead(ButtonResetpin);
  if (ButtonResetState == LOW) //if reset button pressed reset the counter to 00.00
  {
    n = 6000;
  }

}
void minus()
{

  startstopbutton();
  if (paused == false)
  {
    if (buttonpush % 2 != 1) // fiqures out what state the button is in
    {
      n--;

      if (n == 0)
      {
        Timer1.detachInterrupt();
        Timer1.attachInterrupt (add);
      }
    }
  }

  if (n == 0)
  {
    clockwise();
    tone (buzzerpin, 1000, 500);
  }


  if (n == 3000)
  {
    tone (buzzerpin, 1000, 100);
  }
  if (n == 1000)
  {
    tone (buzzerpin, 1000, 100);
  }
  if (n == 500)
  {
    tone (buzzerpin, 1000, 100);
  }
  if (n == 400)
  {
    tone (buzzerpin, 1000, 100);
  }
  if (n == 300)
  {
    tone (buzzerpin, 1000, 100);
  }
  if (n == 200)
  {
    tone (buzzerpin, 1000, 100);
  }
  if (n == 100)
  {
    tone (buzzerpin, 1000, 100);
  }
  ButtonResetState = digitalRead(ButtonResetpin);
  if (ButtonResetState == LOW) //if reset button pressed reset the counter to 00.00
  {
    n = 6000;
  }

}


void clockwise()
{
  for (int i = 7; i >= 0; i--)
  {
    setOutput(i);
    delayMicroseconds(motorSpeed);
  }
}

void setOutput(int out)
{
  digitalWrite(motorPin1, bitRead(lookup[out], 0));
  digitalWrite(motorPin2, bitRead(lookup[out], 1));
  digitalWrite(motorPin3, bitRead(lookup[out], 2));
  digitalWrite(motorPin4, bitRead(lookup[out], 3));
}

void startstopbutton ()
{
  ButtonStartStopState = digitalRead(ButtonStartStopPin); // Reads inputy of start stop button


  if (ButtonStartStopState != laststate) // if button is pressed and has a value >0
  {
    if (ButtonStartStopState == LOW) // if state is high
    {
      buttonpush++; // Increase the amount of times pushed
    }
  }
  laststate = ButtonStartStopState; // reset the amount of times pushed

}
