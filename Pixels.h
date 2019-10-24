#pragma once
#include "HelperFunctions.h"
#include <iostream>
#include <exception>
#include <sstream>
#include <fstream>
#include <istream>
#include <cstdlib>
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

	void AddNoise() {
		int RandomInt = rand() % 11 + -11;

		_red = _red + RandomInt;
		if (_red > 255) {
			_red = 255;
		}
		if (_red < 0) {
			_red = 0;
		}

		_green = _green + RandomInt;
		if (_green > 255) {
			_green = 255;
		}
		if (_green < 0) {
			_green = 0;
		}

		_blue = _blue + RandomInt;
		if (_blue > 255) {
			_blue = 255;
		}
		if (_blue < 0) {
			_blue = 0;
		}
	}

	void HighContrast() {
		if (_red <= 127) {
			_red = 0;
		}
		else {
			_red = 255;
		}

		if (_green <= 127) {
			_green = 0;
		}
		else {
			_green = 255;
		}

		if (_blue <= 127) {
			_blue = 0;
		}
		else {
			_blue = 255;
		}
	}
};

