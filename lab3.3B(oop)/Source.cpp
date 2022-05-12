//Source.cpp
#include <iostream>
#include "BitString.h"
using namespace std;


int main()
{
	BitString b1, b2;
	cout << "first object" << endl;
	cin >> b1;
	cout << "second object" << endl;
	cin >> b2;
	cout << endl;

	cout << "first object" << endl;
	cout << b1;
	cout << "second object" << endl;
	cout << b2;
	cout << endl;

	BitString  XoR;

	XoR = (b1 ^ b2);

	cout << "first object ^ second object" << endl;
	cout << XoR;


}