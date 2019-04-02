#include "Test.h"
#include "Adafruit_NeoPixel.h"


Test::Test (void)
{
    strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
	strip.begin();
 
}

void Test::DecimalPoint(void)
{
	Displayblank();
	strip.setPixelColor(84, red, green, blue);
	strip.setPixelColor(85, red, green, blue);
	strip.setPixelColor(86, red, green, blue);
	strip.setPixelColor(87, red, green, blue);
	strip.show();
}


void Test::Displayblank(void)
{
	strip.clear();
}

void Test::Displayone(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.show();
}

void Test::Displaytwo(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(9 + Segment, red, green, blue);
	strip.setPixelColor(10 + Segment, red, green, blue);
	strip.setPixelColor(11 + Segment, red, green, blue);
	strip.setPixelColor(12 + Segment, red, green, blue);
	strip.setPixelColor(13 + Segment, red, green, blue);
	strip.setPixelColor(14 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.show();
}

void Test::Displaythree(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.setPixelColor(9 + Segment, red, green, blue);
	strip.setPixelColor(10 + Segment, red, green, blue);
	strip.setPixelColor(11 + Segment, red, green, blue);
	strip.show();
}

void Test::Displayfour(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(15 + Segment, red, green, blue);
	strip.setPixelColor(16 + Segment, red, green, blue);
	strip.setPixelColor(17 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.show();
}

void Test::Displayfive(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(15 + Segment, red, green, blue);
	strip.setPixelColor(16 + Segment, red, green, blue);
	strip.setPixelColor(17 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.setPixelColor(9 + Segment, red, green, blue);
	strip.setPixelColor(10 + Segment, red, green, blue);
	strip.setPixelColor(11 + Segment, red, green, blue);
	strip.show();
}

void Test::Displaysix(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(15 + Segment, red, green, blue);
	strip.setPixelColor(16 + Segment, red, green, blue);
	strip.setPixelColor(17 + Segment, red, green, blue);
	strip.setPixelColor(12 + Segment, red, green, blue);
	strip.setPixelColor(13 + Segment, red, green, blue);
	strip.setPixelColor(14 + Segment, red, green, blue);
	strip.setPixelColor(9 + Segment, red, green, blue);
	strip.setPixelColor(10 + Segment, red, green, blue);
	strip.setPixelColor(11 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.show();
}

void Test::Displayseven(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.show();
}

void Test::Displayeight(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.setPixelColor(9 + Segment, red, green, blue);
	strip.setPixelColor(10 + Segment, red, green, blue);
	strip.setPixelColor(11 + Segment, red, green, blue);
	strip.setPixelColor(12 + Segment, red, green, blue);
	strip.setPixelColor(13 + Segment, red, green, blue);
	strip.setPixelColor(14 + Segment, red, green, blue);
	strip.setPixelColor(15 + Segment, red, green, blue);
	strip.setPixelColor(16 + Segment, red, green, blue);
	strip.setPixelColor(17 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.show();
}

void Test::Displaynine(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.setPixelColor(19 + Segment, red, green, blue);
	strip.setPixelColor(18 + Segment, red, green, blue);
	strip.setPixelColor(20 + Segment, red, green, blue);
	strip.setPixelColor(15 + Segment, red, green, blue);
	strip.setPixelColor(16 + Segment, red, green, blue);
	strip.setPixelColor(17 + Segment, red, green, blue);
	strip.show();
}

void Test::Displayzero(void)
{
	Displayblank();
	DecimalPoint();
	strip.setPixelColor(0 + Segment, red, green, blue);
	strip.setPixelColor(1 + Segment, red, green, blue);
	strip.setPixelColor(2 + Segment, red, green, blue);
	strip.setPixelColor(3 + Segment, red, green, blue);
	strip.setPixelColor(4 + Segment, red, green, blue);
	strip.setPixelColor(5 + Segment, red, green, blue);
	strip.setPixelColor(6 + Segment, red, green, blue);
	strip.setPixelColor(7 + Segment, red, green, blue);
	strip.setPixelColor(8 + Segment, red, green, blue);
	strip.setPixelColor(9 + Segment, red, green, blue);
	strip.setPixelColor(10 + Segment, red, green, blue);
	strip.setPixelColor(11 + Segment, red, green, blue);
	strip.setPixelColor(12 + Segment, red, green, blue);
	strip.setPixelColor(13 + Segment, red, green, blue);
	strip.setPixelColor(14 + Segment, red, green, blue);
	strip.setPixelColor(15 + Segment, red, green, blue);
	strip.setPixelColor(16 + Segment, red, green, blue);
	strip.setPixelColor(17 + Segment, red, green, blue);
	strip.show();
}

void Test::PickNumber(int x)
{
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
}

void Test::PickSegment(int x)
{
	switch (x)
	{

	case 0:
		Segment = 0;
		break;

	case 1:
		Segment = 21;
		break;

	case 2:
		Segment = 42;
		break;

	default:
		Segment = 63;
		break;
	}
}


void Test::RunTimer(void)
{
	unsigned long currentMillis = millis();

	if (currentMillis - previousMillis >= interval)
	{
		// save the last time you blinked the LED
		previousMillis = currentMillis;
		n++; //Increases N till it hits 6001 (60 seconds)
		if (n == 6001)
		{
			n = 0;  // sets n back to 0 when it goes over 60 seconds
		}
	}

	Displayblank();// displays 0 at base
	PickSegment(0); // sets segment
	PickNumber((n / 1000)); /// 4th segment 1000ths and counts

	Displayblank(); // displays 0 at base
	PickSegment(1);// 3rd  segment run segment 
	PickNumber((n % 1000) / 100); /// 3th segment 100ths

	Displayblank();// displays 0 at base
	PickSegment(2);// 2nd  segment run segment 
	PickNumber((n % 100) / 10); /// 2nd segment 10ths

	Displayblank();// displays 0 at base
	PickSegment(3); // 1st segment run segment 
	PickNumber((n % 10)); /// 1st segment 1ths



}