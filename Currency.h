#include <string>
#include <iostream>
#ifndef _CURRENCY_H
using namespace std;
const int SIZE = 5;
class Currency {
private:
	string name, fName;
	int wParts, fParts;
	int arr[SIZE]; //arr of pointers
public:
	void setName(string);
	void setWParts(int);
	void setFParts(int);
	void setFName(string);

	string getName();
	int getWParts();
	int getFParts();
	string getFName();

	Currency():wParts(0), fParts(0), name(" "), fName(" ") {};
	Currency(string name1, string fName1, int wParts1, int fParts1) : name(name1), fName(fName1), wParts(wParts1), fParts(fParts1) {}; 

	/*virtual*/ friend ostream &operator<< (ostream &output, const Currency &D);
	/*virtual*/ friend istream &operator<< (istream &input, Currency &D);
};
#endif
