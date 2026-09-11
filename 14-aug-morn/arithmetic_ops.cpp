#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Arithmetic operators
    cout << "\n--- Arithmetic ---" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational/Logical operators
    cout << "\n--- Relational & Logical ---" << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    // Truth value of (a>b && a!=0)
    cout << "\n--- Truth Value ---" << endl;
    cout << "(a>b && a!=0) : " << (a > b && a != 0) << endl;

    return 0;
}