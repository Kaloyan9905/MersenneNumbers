#include "../headers/divisors.h"
#include "../headers/help.h"

void findCompositeDivisors(const int &number, int divisors[], int &count) {
    count = 0;

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0 && !isPrime(i)) {
            divisors[count++] = i;
        }
    }
}

// Function 5
void differenceOfCompositeDivisors(const int &number1, const int &number2, int result[], int &resultSize) {
    int divisorsA[100], divisorsB[100];
    int countA = 0, countB = 0;

    findCompositeDivisors(number1, divisorsA, countA);
    findCompositeDivisors(number2, divisorsB, countB);

    resultSize = 0;

    for (int i = 0; i < countA; i++) {
        bool found = false;

        for (int j = 0; j < countB; j++) {
            if (divisorsA[i] == divisorsB[j]) {
                found = true;
                break;
            }
        }

        if (!found)
            result[resultSize++] = divisorsA[i];
    }
}