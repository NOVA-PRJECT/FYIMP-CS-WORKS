#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int number) {
    if (number == 0)
        return "0";

    string binary = "";
    while (number > 0) {
        binary = char('0' + number % 2) + binary;
        number = number / 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    for (int i = 0; i < static_cast<int>(binary.length()); i++)
        decimal = decimal * 2 + (binary[i] - '0');
    return decimal;
}

int main() {
    int choice;
    cout << "1. Decimal to binary\n2. Binary to decimal\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        int number;
        cout << "Enter a non-negative decimal number: ";
        cin >> number;
        if (number < 0)
            cout << "Please enter a non-negative number.\n";
        else
            cout << "Binary: " << decimalToBinary(number) << "\n";
    } else if (choice == 2) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        cout << "Decimal: " << binaryToDecimal(binary) << "\n";
    } else {
        cout << "Invalid choice.\n";
    }
    return 0;
}