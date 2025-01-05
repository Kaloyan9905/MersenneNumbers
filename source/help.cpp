#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(const unsigned long long &number) {
    if (number <= 1)
        return false;

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

bool isPerfect(const unsigned long long &number) {
    unsigned long long sum = 1;

    for (unsigned long long i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            sum += i;

            if (i != number / i)
                sum += number / i;
        }
    }

    return sum == number;
}
