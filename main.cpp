#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int mersenneNumber = 15;

    if (isMersenneNumber(mersenneNumber)) {
        cout << isMersenneNumberPrime(mersenneNumber) << endl;
    }

    return 0;
}
