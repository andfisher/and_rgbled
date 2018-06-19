
#include "Arduino.h"
#include "And_RGBLed.h"

And_RGBLed::And_RGBLed(int commonPin, int rPin, int gPin, int bPin) 
{
	int off;

	_commonPin = commonPin;
	
	off = (commonPin == AND_COMMON_ANODE ? 255 : 0);

	_redPin = rPin;
	_greenPin = gPin;
	_bluePin = bPin;

	pinMode(_redPin, OUTPUT);
	pinMode(_bluePin, OUTPUT);
	pinMode(_greenPin, OUTPUT);
	
	analogWrite(_redPin, off);
	analogWrite(_greenPin, off);
	analogWrite(_bluePin, off);
}

void And_RGBLed::setColor(int r, int g, int b)
{
	_currentRedValue = r;
	_currentGreenValue = g;
	_currentBlueValue = b;

	analogWrite(_redPin, r);
	analogWrite(_greenPin, g);
	analogWrite(_bluePin, b);
}