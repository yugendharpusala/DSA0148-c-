#include <iostream>
using namespace std;

// Function to check whether a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num, primeCount = 0, compositeCount = 0;

    cout << "Enter a series of integers (enter 0 to stop): " << endl;

    do {
        cin >> num;
        if (isPrime(num)) {
            primeCount++;
        } else if (num > 1) {
            compositeCount++;
        }
    } while (num != 0);

    cout << "Number of prime numbers entered: " << primeCount << endl;
    cout << "Number of composite numbers entered: " << compositeCount << endl;

    return 0;
}

