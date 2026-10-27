#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1, temp = n;
    while (temp > 0) {
        fact = fact * temp;
        temp--;
    }
    cout << "Factorial = "<<fact<<endl;

    int sum = 0;
    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "Sum of digits = " << sum << endl;

    return 0;
}