#pragma once
#include <string>
#include <iostream>
#ifndef _RUPEE_H_
using namespace std;

class Rupee : public Currency
{
private:
public:
	friend istream &operator >> (istream &input, Rupee &R);
	friend ostream &operator << (ostream &output, const Rupee &R);
	void print();

	Rupee() {};
	Rupee(int, int, string, string);
	~Rupee();
};
#endif