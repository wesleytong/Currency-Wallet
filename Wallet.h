#pragma once
#include <string>
#include <iostream>
#ifndef _WALLET_H_
using namespace std;

class Wallet {
private:
	Currency * currencyArr;
public:
	//Dollar dollar;
	//Euro euro;
	//Rupee rupee;
	//Yen yen;
	//Yuan yuan;

	//Wallet(Dollar, Euro, Rupee, Yen, Yuan);

	Wallet() :currencyArr(0) {};
	Wallet(Currency*);

	Currency* getArray();
	void setArray(Currency*);

	int numNonZero(Currency*);

	bool nonZero(Currency);
	bool isEmpty(Currency*);

	void addMoney(Currency*, string, int, int);
	void subMoney(Currency*, string, int, int);
	void zero(Currency*);


};
#endif