#pragma once
#include <string>
#include <iostream>
#ifndef _EURO_H
using namespace std;

class Euro :public Currency
{
private:
public:
	friend istream &operator >> (istream &input, Euro &E);
	friend ostream &operator << (ostream &output, const Euro &E);
	void print();

	Euro() {};
	Euro(int, int, string, string);
	~Euro();
};

#endif