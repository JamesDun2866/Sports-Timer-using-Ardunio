
#ifndef Test_h
#define Test_h
#include "Adafruit_NeoPixel.h"


class Test
{
  public:
    Test(void);
    void Displayblank(void);
	void Displayone(void);
	void Displaytwo(void);
	void Displaythree(void);
	void Displayfour(void);
	void Displayfive(void);
	void Displaysix(void);
	void Displayseven(void);
	void Displayeight(void);
	void Displaynine(void);
	void Displayzero(void);
	void DecimalPoint (void);
	void PickSegment(int x);
	void PickNumber(int x);
	void RunTimer(void);
	

	
	int NUMPIXELS = 88;
	int PIN = 6;
	int red = 255;
	int green = 0;
	int blue = 0;
	int value;
	int Segment = 0;
	long n = 0;
	int x = 100;
	int count = 0;
	const long  interval = 1000 / 100;
	unsigned long previousMillis = 0;

	Adafruit_NeoPixel strip;
};


#endif


