#include <iostream>
#include <stdexcept>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0)
        throw runtime_error("Cannot divide by zero.");
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int numerator, denominator;
    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;

    try {
        cout << "Result: " << divide(numerator, denominator) << "\n";
    } catch (const exception &error) {
        cout << "Error: " << error.what() << "\n";
    }
    return 0;
}