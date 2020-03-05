#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Currency.h"
#include "Yuan.h"

istream &operator>> (istream &input, Yuan &Y)
{
	input >> Y.setName >> Y.setWParts >> Y.setFParts >> Y.setFName;
	return input;
}
ostream &operator<<(ostream &output, Yuan &Y)
{
	Y.print();
	return output;
}
void Yuan::print()
{
	cout << getName() << getWParts() << getFParts() << getFName() << endl;
}
Yuan::Yuan(int whole, int fraction, string name, string fName)
{
	name = "Yuan";
	fName = "Fen";
	wParts = whole;
	fParts = fraction;
}
//add +/- operators 
