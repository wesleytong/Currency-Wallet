#pragma once
#include <string>
#include <iostream>

#ifndef _DOLLAR_H_
using namespace std;

class Dollar : public Currency {
private:
public:
	friend istream &operator >> (istream &input, Dollar &D);
	friend ostream &operator << (ostream &output, const Dollar &D);
	void print();

	Dollar():name("Dollar"), fName("Cent"), wParts(1), fParts(25) {};
	Dollar(int, int, string, string);
	~Dollar(); //destructor should empty the dollars in wallet

};
#endif

