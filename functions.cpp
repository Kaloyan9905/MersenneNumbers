#include "functions.h"

#include <cmath>
#include <iostream>

using namespace std;


bool isMersenneNumber(const unsigned int &number) {
    if (number < 1) {
        cout << "Mersenne numbers must be positive!" << endl;
        return false;
    }

    double powerOfNumber = log2(number + 1);

    return floor(powerOfNumber) == powerOfNumber;
}

bool isMersenneNumberPrime(const unsigned int &number) {
    bool isPrime = true;

    if (number == 0 || number == 1) {
        isPrime = false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return isPrime;
}
