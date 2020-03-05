#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Currency.h"
#include "Wallet.h"
#include "Dollar.h"

Wallet::Wallet(Currency * arr) {
	//Need to make this so that it's in terms of the size of the array
	//When I do arr.size() it says that it needs a class type
	for (int i = 0; i < 5; i++) {
		*(currencyArr++) = *(arr++);
	}
}

bool Wallet::nonZero(Currency curr) {
	if (curr.getFParts() != 0 || curr.getWParts() != 0) {
		return true;
	}
}

int Wallet::numNonZero(Currency * currencyArr) {
	int num;
	for (int i = 0; i < 5; i++) {
		if (nonZero(*(currencyArr++)) == true) {
			num++;
		}
	}
	return num;
}

bool Wallet::isEmpty(Currency * currencyArr) {
	if (numNonZero(currencyArr) != 0) {
		return false;
	}
	else {
		return true;
	}
}

void Wallet::addMoney(Currency* arr, string name, int wParts1, int fParts1) {
	for (int i = 0; i < 10; i + 2) {
		if ((arr++)->getName() == name) {
			arr->setWParts(arr->getWParts() + wParts1);
			arr->setFParts(arr->getFParts() + wParts1);
		}
	}
}

void Wallet::subMoney(Currency* arr, string name, int wParts1, int fParts1) {
	for (int i = 0; i < 10; i + 2) {
		if ((arr++)->getName() == name) {
			arr->setWParts(arr->getWParts() - wParts1);
			arr->setFParts(arr->getFParts() - wParts1);
		}
	}

}

void Wallet::zero(Currency * arr) {
	for (int i = 0; i < 5; i++) {
		(arr++)->setFParts(0);
		(arr++)->setWParts(0);
	}
}

Currency* Wallet::getArray() {
	return currencyArr;
}

void Wallet::setArray(Currency* arr) {
	for (int i = 0; i < 5; i++) {
		*(currencyArr++) = *(arr++);
	}
}
