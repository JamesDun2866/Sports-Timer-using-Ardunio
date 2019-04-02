int pinA = 2; //pin 11 on display
int pinB = 3; //pin 7 on display
int pinC = 4; //pin 4 on display
int pinD = 5; //pin 2 on display
int pinE = 6; //pin 1 on display
int pinF = 7; //pin 10 on display
int pinG = 8; //pin 5 on display
int pinP = A1; //Pin 3 on dsiplay
int D1 = 9; //pin 12 on display
int D2 = 10; //pin 9 on display
int D3 = 11; //pin 8 on display
int D4 = 12; //pin 6 on display

// Other to connect 5v to positive, ground to neagtive, connect buttons by postive end of resister (10k) space 4 negative end with ground button beneath and digital pin on other end of button


int ButtonResetpin = 13; // Digital pin for reset button
int ButtonStartStopPin = A0; //Digital pin for
int buttonpush = 0;

int ButtonResetState = 0; // Initial state of the of reset button
int ButtonStartStopState = 0; // Inital state of the Start/Spot button

int laststate = 0; // Orgignal state for start/stop
int del = 5; // 5ms Delay
int count = 0; // count to count to 10
long n = 0;
int x = 100;

long previousMillis = 0;
long interval = 1000 / 100;


void setup() {
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinP, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  // Initialize the buttons as inputs
  pinMode (ButtonResetpin, INPUT);
  pinMode(ButtonStartStopPin, INPUT);

}
void Displayone() // Code to display 1
{
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void Displaytwo() // Code to display 2
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}
void Displaythree() // Code to display 3
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}

void Displayfour() // Code to display 4
{
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void Displayfive() // Code to display 5
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void Displaysix() // Code to display 6
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void Displayseven() // Code to display 7
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);

}
void Displayeight() // Code to display 8
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void Displaynine() // Code to display 9
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void Displayzero() // Code to display 0
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
}

void Displayblank () // Code to display a blank set (0)
{
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void PickSegment(int x) // Code to set the segments
{
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite (pinP, LOW);

  switch (x)
  {
    case 0:
      digitalWrite (D1, LOW);
      break;

    case 1:
      digitalWrite(D2, LOW);
      digitalWrite(pinP, HIGH); // Decimal point is always on
      break;

    case 2:
      digitalWrite (D3, LOW);
      break;

    default:
      digitalWrite (D4, LOW);
      break;
  }
}
void Picknumber (int x) // Cycles around 0,1,2,3,4,5,6,7,8 and 9
{
  switch (x)
  {
    default:
      Displayzero();
      break;
    case 1:
      Displayone();
      break;
    case 2:
      Displaytwo();
      break;
    case 3:
      Displaythree();
      break;
    case 4:
      Displayfour();
      break;
    case 5:
      Displayfive();
      break;
    case 6:
      Displaysix();
      break;
    case 7:
      Displayseven();
      break;
    case 8:
      Displayeight();
      break;
    case 9:
      Displaynine();
      break;
  }
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

void loop() //runs the timer
{
  startstopbutton();

  unsigned long currentMillis = millis();
  if (buttonpush % 2 != 1)
  {
    if (currentMillis - previousMillis >= interval)
    {
      previousMillis = currentMillis;
      n++;

      if (n == 6001)
      {
        n = 0;
      }
    }
  }
  ButtonResetState = digitalRead(ButtonResetpin); // Takes input from reset button

  if (ButtonResetState == LOW) //if reset button pressed reset the counter to 00.00
  {
    n = 0;
  }


  Displayblank();// displays 0 at base
  PickSegment(0); // sets segment
  Picknumber((n / 1000)); /// 4th segment 1000ths and counts

  Displayblank(); // displays 0 at base
  PickSegment(1);// 3rd  segment run segment
  Picknumber((n % 1000) / 100); /// 3th segment 100ths

  Displayblank();// displays 0 at base
  PickSegment(2);// 2nd  segment run segment
  Picknumber((n % 100) / 10); /// 2nd segment 10ths

  Displayblank();// displays 0 at base
  PickSegment(3); // 1st segment run segment
  Picknumber((n % 10)); /// 1st segment 1000ths

}
