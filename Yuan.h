#pragma once
#include <string>
#include <iostream>
#ifndef _YUAN_H_
using namespace std;
class Yuan : public Currency
{
private:
public:
	friend istream &operator >> (istream &input, Yuan &Y);
	friend ostream &operator << (ostream &output, const Yuan &Y);
	void print();

	Yuan() {};
	Yuan(int, int, string, string);
	~Yuan();
};
#endif