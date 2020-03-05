#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include "Currency.h"
#include "Euro.h"
using namespace std;
istream &operator >> (istream &input, Euro &E)
{
	input >> E.setName >> E.setWParts >> E.setFParts >> E.setFName;
	return input;
}
ostream &operator<<(ostream &output, Euro &E)
{
	E.print();
	return output;
}
void Euro::print()
{
	cout << getName() << getWParts() << getFParts() << getFName() << endl;
}
Euro::Euro(int whole, int fraction, string name, string fName)
{
	name = "Euro";
	fName = "Cent";
	wParts = whole;
	fParts = fraction;
}
//Euro operator+(const Euro &euro)
//use operator