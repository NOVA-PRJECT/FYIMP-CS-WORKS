#include <iostream>
using namespace std;

long long factorial(int number) {
    if (number <= 1)
        return 1;
    return number * factorial(number - 1);
}

int main() {
    int number;
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers.\n";
    else
        cout << "Factorial: " << factorial(number) << "\n";
    return 0;
}