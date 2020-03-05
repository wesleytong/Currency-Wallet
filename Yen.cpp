#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "Currency.h"
#include "Yen.h"

istream &operator >> (istream &input, Yen &Y)
{
	input >> Y.setName >> Y.setWParts >> Y.setFParts >> Y.setFName;
}
ostream &operator<<(ostream &output, Yen &Y)
{
	Y.print();
	return output;
}
void Yen::print()
{
	cout << getName() << getWParts() << getFParts() << getFName() << endl;
}
Yen::Yen(int whole, int fraction, string name, string fName)
{
	name = "Yen";
	fName = "Sen";
	wParts = whole;
	fParts = fraction;
}
