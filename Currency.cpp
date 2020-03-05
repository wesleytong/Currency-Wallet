#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <fstream>
#include "Currency.h"
#include "Dollar.h"
#include "Wallet.h"
void Currency::setFName(string fname1)
{
	fName = fname1;
}
void Currency::setName(string name1) {
	name = name1;
}

void Currency::setWParts(int wParts1) {
	wParts = wParts1;
}

void Currency::setFParts(int fParts1) {
	fParts = fParts1;
}

string Currency::getName() {
	return name;
}

int Currency::getFParts() {
	return fParts;
}

int Currency::getWParts() {
	return wParts;
}
string Currency::getFName()
{
	return fName;
}