#ifndef NUMBERS_H
#define NUMBERS_H

// Function 1
inline bool isMersenneNumber(const unsigned long long &number);

// Function 2
bool isMersenneNumberPrime(const unsigned long long &num);

// Function 3
void listAllNumberDivisors(const unsigned long long &number);

// Function 4
unsigned int *saveAllNumberPrimeDivisors(const unsigned long long &number, unsigned int &count);

// Function 6
void showMersenneNumbersInInterval(const unsigned long long &minMersenne,
                                   const unsigned long long &maxMersenne);

// Function 7
void showFirstNMersenneNumbers(const unsigned int &N);

// Function 8
void showFirstNPrimeMersenneNumbers(const unsigned int &N);

// Function 9
unsigned long long *saveMersennePrimeNumbersInInterval(const unsigned long long &minMersenne,
                                                       const unsigned long long &maxMersenne,
                                                       unsigned int &size);

// Function 10
unsigned long long *saveFirstNPerfectMersenneNumbers(const unsigned int &N);


#endif //NUMBERS_H
