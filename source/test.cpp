#include <iostream>
#include "../headers/test.h"
#include "../headers/numbers.h"
#include "../headers/divisors.h"

using namespace std;


void testIsMersenneNumber() {
    const unsigned long long number1 = 12;
    const unsigned long long number2 = 31;

    if (isMersenneNumber(number1))
        cout << number1 << " is Mersenne number" << endl;
    else
        cout << number1 << " is not Mersenne number" << endl;

    if (isMersenneNumber(number2))
        cout << number2 << " is Mersenne number" << endl;
    else
        cout << number2 << " is not Mersenne number" << endl;
}

void testIsMersenneNumberPrime() {
    const unsigned long long mersennePrimeNumber = 7;
    const unsigned long long mersenneNonPrimeNumber = 255;

    if (isMersenneNumberPrime(mersennePrimeNumber))
        cout << mersennePrimeNumber << " is prime Mersenne number" << endl;
    else
        cout << mersennePrimeNumber << " is not prime Mersenne number" << endl;

    if (isMersenneNumberPrime(mersenneNonPrimeNumber))
        cout << mersenneNonPrimeNumber << " is prime Mersenne number" << endl;
    else
        cout << mersenneNonPrimeNumber << " is not prime Mersenne number" << endl;
}

void testlistAllNumberDivisors() {
    listAllNumberDivisors(100);
}

void testSaveAllNumberPrimeDivisors() {
    unsigned long long number = 1000;
    unsigned int count = 0;

    unsigned int *primeDivisors = saveAllNumberPrimeDivisors(number, count);

    cout << "Prime divisors of " << number << ": ";

    for (unsigned int i = 0; i < count; i++) {
        cout << primeDivisors[i] << " ";
    }

    cout << endl;

    delete[] primeDivisors;
}

void testDifferenceOfCompositeDivisors() {
    int num = 12;
    int compositeDivisors[100];
    int count = 0;

    findCompositeDivisors(num, compositeDivisors, count);

    cout << "Composite divisors of " << num << ": ";

    for (int i = 0; i < count; i++) {
        cout << compositeDivisors[i] << " ";
    }

    cout << endl;

    int a = 2000, b = 1234;
    int result[100];
    int resultSize = 0;

    differenceOfCompositeDivisors(a, b, result, resultSize);

    cout << "Difference of composite divisors of " << a << " and " << b << ": ";

    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }

    cout << endl;
}

void testShowMersenneNumbersInInterval() {
    showMersenneNumbersInInterval(100, 1000);
}

void testShowFirstNMersenneNumbers() {
    showFirstNMersenneNumbers(10);
}

void testShowFirstNPrimeMersenneNumbers() {
    showFirstNPrimeMersenneNumbers(9);
}

void testSaveMersennePrimeNumbersInInterval() {
    unsigned long long minMersenne = 1;
    unsigned long long maxMersenne = 1000;
    unsigned int size = 0;

    unsigned long long *mersennePrimes = saveMersennePrimeNumbersInInterval(minMersenne, maxMersenne, size);

    cout << "Mersenne prime numbers in the interval [" << minMersenne << ", " << maxMersenne << "]: ";

    for (unsigned int i = 0; i < size; i++) {
        cout << mersennePrimes[i] << " ";
    }

    cout << endl;

    delete[] mersennePrimes;
}

void testSaveFirstNPerfectMersenneNumbers() {
    const unsigned int N = 5;
    unsigned long long *perfectNumbers = saveFirstNPerfectMersenneNumbers(N);

    cout << "The first " << N << " perfect Mersenne numbers are: ";

    for (unsigned int i = 0; i < N; i++) {
        cout << perfectNumbers[i] << " ";
    }

    cout << endl;

    delete[] perfectNumbers;
}
