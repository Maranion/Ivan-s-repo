//============================================================================
// Name        : Zadacha_14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "type a number and 'Enter'" << std::endl;
	cin >> i;

	(i > 5) ? cout << "It's greater than 5" << endl :
	(i < 5) ? cout << "It's less than 5 " << endl :
	cout << "It's equal to 5 " << endl;

	cout << "type a number and 'Enter'" << endl;
	cin >> i;

	(i < 10) ?
	(i > 5) ? cout << "5 < i < 10" << endl :
	cout << "i <= 5" << endl :
	cout << "i >= 10" << endl;

	return 0;
}
