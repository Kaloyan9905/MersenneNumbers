#ifndef FUNCTIONS_H
#define FUNCTIONS_H

bool isPrime(const unsigned int &number);

bool isMersenneNumber(const unsigned int &number);

bool isMersenneNumberPrime(const unsigned int &number);

void listAllNumberDivisors(const unsigned int &number);

unsigned int *saveAllNumberPrimeDivisors(const unsigned int &number, unsigned int &count);

void showMersenneNumbersInInterval(unsigned int start, unsigned int end);

#endif //FUNCTIONS_H
