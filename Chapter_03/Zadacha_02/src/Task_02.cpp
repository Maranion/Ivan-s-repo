//============================================================================
// Name        : Task_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

    bool primeCheck;
    for (int i = 2; i <=120; i++) {
   primeCheck = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                primeCheck = false;
                break;
            }
        }
        if (primeCheck)
            cout << i << " ";
    }

	return 0;
}
