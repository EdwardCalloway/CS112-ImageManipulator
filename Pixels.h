#pragma once
#include "HelperFunctions.h"
#include <iostream>
#include <exception>
#include <sstream>
#include <fstream>
#include <istream>
using namespace std;

class Pixels {
private:
	//Each pixel requiresa  red green and blue color value
	int _red = 0;
	int _green = 0;
	int _blue = 0;

public:
	//Initial calls
	Pixels(int red, int green, int blue) {
		_red = red;
		_green = green;
		_blue = blue;
	}

	Pixels() {
	
	}


	//The modifiers of the pixel
	void RemoveRed() {
		_red = 0;
	}

	void RemoveGreen() {
		_green = 0;
	}

	void RemoveBlue() {
		_blue = 0;
	}

	void NegateRed() {
		_red = abs(255 - _red);
	}

	void NegateGreen() {
		_green = abs(255 - _green);
	}

	void NegateBlue() {
		_blue = abs(255 - _blue);
	}

	void Greyscale() {
		int total = _red + _green + _blue;
		int average = total / 3;
		_red = average;
		_green = average;
		_blue = average;
	}
};

