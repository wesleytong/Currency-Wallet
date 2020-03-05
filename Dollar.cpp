#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Currency.h"
#include "Dollar.h"
using namespace std;
istream &operator >> (istream &input, Dollar &D) { //dont need to ask for input for name and fractional name of the currency we alreayd know it
	//can't do this because it's out of scope 
	//use mutators 
	input >> D.setName >> D.setWParts >> D.setFParts >> D.setFName;
	return input;
}
ostream &operator<<(ostream &output, Dollar &D)
{
	D.print();
	return output;
}
void Dollar::print() {
	cout << getName() << getWParts() << getFParts() << getFName() << endl;
}
Dollar::Dollar(int whole, int fraction, string name, string fName)
{
	name = "Dollar";
	fName = "Cent";
	wParts = whole;
	fParts = fraction;
}
Dollar operator+(Dollar &dollar, int value)
{
	Dollar tempDol;
	tempDol.setWParts(dollar.getWParts() + value);
	tempDol.setFParts(dollar.getFParts() + value);
	return tempDol;
}
Dollar operator-(Dollar &dollar1, int value)
{
	Dollar tempDol;
	tempDol.setWParts(dollar1.getWParts() - value);
	tempDol.setFParts(dollar1.getFParts() - value);
	return tempDol;
}
Currency operator + (Currency &C, int value) {
	//C.setWParts(C.getWParts() += value);
	C.setWParts(value += C.getWParts());
	//C.setFParts(C.getFParts() += value);
	C.setFParts(value += C.getFParts());
	return C;
}
Currency operator - (Currency &C, int value) {
	//C.setWParts(C.getWParts() -= value);
	//C.setFParts(C.getFParts() -= value);
	C.setWParts(value -= C.getWParts());
	C.setFParts(value -= C.getFParts());
	return C;
}
/*Dollar operator+(const Dollar &dollar)
{
	Dollar tempDol;
	tempDol.setWParts = wParts + dollar.setWParts;
	wParts++;
	tempDol.setFParts = fParts + dollar.setFParts;
	fParts++;
	return tempDol;
}
Dollar operator-(const Dollar &dollar1)
{
	Dollar tempDol1;
	tempDol1.setWParts = wParts = dollar1.setWParts;
	tempDol1.setFParts = fParts = dollar1.setFParts;
	return tempDol1;
}
*/