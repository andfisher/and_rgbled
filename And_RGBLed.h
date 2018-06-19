
#ifndef And_RGBLed_h
#define And_RGBLed_h

#include "Arduino.h"

#define AND_COMMON_CATHODE 0
#define AND_COMMON_ANODE 1

class And_RGBLed {
	public:
		And_RGBLed(int commonPin, int rPin, int gPin, int bPin);
		void setColor(int r, int g, int b);
	private:
		int _commonPin;
		int _currentRedValue;
		int _currentGreenValue;
		int _currentBlueValue;
		int _redPin;
		int _bluePin;
		int _greenPin;
};

#endif