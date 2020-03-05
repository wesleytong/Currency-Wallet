#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Currency.h"
#include "Rupee.h"

istream &operator >> (istream &input, Rupee &R)
{
	input >> R.setName >> R.setWParts >> R.setFParts >> R.setFName;
	return input;
}
ostream &operator<<(ostream &output, Rupee &R)
{
	R.print();
	return output;
}
void Rupee::print()
{
	cout << getName() << getWParts() << getFParts() << getFName() << endl;
}
Rupee::Rupee(int whole, int fraction, string name, string fName)
{
	name = "Rupee";
	fName = "Paise";
	wParts = whole;
	fParts = fraction;
}