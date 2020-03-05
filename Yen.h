#pragma once
#include <string>
#include <iostream>
#ifndef _YEN_H_
using namespace std;

class Yen : public Currency 
{
private:
public:
	friend istream &operator >> (istream &input, Yen &Y);
	friend ostream &operator << (ostream &output, const Yen &Y);
	void print();

	Yen() {};
	Yen(int, int, string, string);
	~Yen();
};

#endif