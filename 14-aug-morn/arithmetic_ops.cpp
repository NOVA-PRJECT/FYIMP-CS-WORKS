#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Add :" << a + b << endl;
    cout << "Sub :" << a - b << endl;
    cout << "Div :" << a / b << endl;
    cout << "Multi :" << a * b << endl;
    cout << "Mod :" << a % b << endl;
    cout << "Greater :" << (a > b) << endl;
    cout << "Lesser :" << (a < b) << endl;
    cout << "a == b :" << (a == b) << endl;
    cout << "a != b :" << (a != b) << endl;
    cout << "a >= b :" << (a >= b) << endl;
    cout << "a <= b :" << (a <= b) << endl;
    cout << "(a>b && a!=0) : " << (a > b && a != 0) << endl;

    return 0;
}