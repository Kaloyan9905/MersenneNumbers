#include "functions.h"

#include <cmath>
#include <iostream>

using namespace std;


bool isPrime(const unsigned int &number) {
    if (number <= 1)
        return false;

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

inline bool isMersenneNumber(const unsigned int &number) {
    if (number < 1)
        return false;

    double powerOfNumber = log2(number + 1);

    return floor(powerOfNumber) == powerOfNumber;
}

inline bool isMersenneNumberPrime(const unsigned int &number) {
    if (!isMersenneNumber(number))
        return false;

    return isPrime(number);
}

void listAllNumberDivisors(const unsigned int &number) {
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            cout << i << " ";

            if (i != number / i)
                cout << number / i << " ";
        }
    }

    cout << endl;
}

unsigned int *saveAllNumberPrimeDivisors(const unsigned int &number, unsigned int &count) {
    const unsigned int MAX_PRIME_DIVISORS_COUNT = number / 2;

    unsigned int *primeDivisors = new unsigned int[MAX_PRIME_DIVISORS_COUNT];

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0 && isPrime(i))
            primeDivisors[count++] = i;
    }

    return primeDivisors;
}

void showMersenneNumbersInInterval(const unsigned int start, const unsigned int end) {
    for (unsigned int i = start; i <= end; i++) {
        if (isMersenneNumber(i))
            cout << i << " ";
    }

    cout << endl;
}
