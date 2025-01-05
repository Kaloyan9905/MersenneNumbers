#include <iostream>
#include <cmath>

#include "../headers/numbers.h"
#include "../headers/help.h"

using namespace std;

// Function 1
inline bool isMersenneNumber(const unsigned long long &number) {
    if (number < 1)
        return false;

    double powerOfNumber = log2(number + 1);

    return floor(powerOfNumber) == powerOfNumber;
}

// Function 2
bool isMersenneNumberPrime(const unsigned long long &number) {
    return isPrime(number) && isMersenneNumber(number);
}

// Function 3
void listAllNumberDivisors(const unsigned long long &number) {
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

// Function 4
unsigned int *saveAllNumberPrimeDivisors(
    const unsigned long long &number,
    unsigned int &count
) {
    const unsigned int MAX_PRIME_DIVISORS_COUNT = number / 2;

    unsigned int *primeDivisors = new unsigned int[MAX_PRIME_DIVISORS_COUNT];

    for (int i = 2; i <= MAX_PRIME_DIVISORS_COUNT; i++) {
        if (number % i == 0 && isPrime(i))
            primeDivisors[count++] = i;
    }

    return primeDivisors;
}

// Function 6
void showMersenneNumbersInInterval(
    const unsigned long long &minMersenne,
    const unsigned long long &maxMersenne
) {
    for (unsigned long long i = minMersenne; i <= maxMersenne; i++) {
        if (isMersenneNumber(i))
            cout << i << " ";
    }

    cout << endl;
}

// Function 7
void showFirstNMersenneNumbers(const unsigned int &N) {
    unsigned int counter = 0;
    unsigned int power = 1;

    while (counter < N) {
        unsigned long long mersenneNumber = (1ULL << power) - 1;

        cout << mersenneNumber << " ";
        counter++;
        power++;
    }

    cout << endl;
}

// Function 8
void showFirstNPrimeMersenneNumbers(const unsigned int &N) {
    unsigned int counter = 0;
    unsigned int power = 2;

    while (counter < N) {
        if (isPrime(power)) {
            unsigned long long mersenneNumber = (1ULL << power) - 1;

            if (isPrime(mersenneNumber)) {
                cout << mersenneNumber << " ";
                counter++;
            }
        }

        power++;
    }

    cout << endl;
}

// Function 9
unsigned long long *saveMersennePrimeNumbersInInterval(
    const unsigned long long &minMersenne,
    const unsigned long long &maxMersenne,
    unsigned int &size
) {
    unsigned int capacity = 1;
    unsigned long long *mersenneNumbers = new unsigned long long[capacity];

    for (unsigned long long p = 2; ; p++) {
        unsigned long long mersenne = (1ULL << p) - 1;

        if (mersenne > maxMersenne)
            break;

        if (mersenne >= minMersenne && isPrime(mersenne)) {
            if (size == capacity) {
                capacity++;

                unsigned long long *newArray = new unsigned long long[capacity];

                for (unsigned int i = 0; i < size; i++)
                    newArray[i] = mersenneNumbers[i];

                delete[] mersenneNumbers;
                mersenneNumbers = newArray;
            }

            mersenneNumbers[size++] = mersenne;
        }
    }

    return mersenneNumbers;
}


// Function 10
unsigned long long *saveFirstNPerfectMersenneNumbers(const unsigned int &N) {
    unsigned long long *perfectNumbers = new unsigned long long[N];
    unsigned int count = 0;
    unsigned int p = 2;

    while (count < N) {
        if (isPrime(p)) {
            unsigned long long mersenne = (1ULL << p) - 1;

            if (isPrime(mersenne)) {
                unsigned long long perfectNumber = (1ULL << p - 1) * mersenne;

                if (isPerfect(perfectNumber)) {
                    perfectNumbers[count] = perfectNumber;
                    count++;
                }
            }
        }

        p++;
    }

    return perfectNumbers;
}
