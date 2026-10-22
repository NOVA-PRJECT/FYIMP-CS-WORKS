#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool prime = number > 1;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << number << " is prime.\n";
    else
        cout << number << " is not prime.\n";
    return 0;
}