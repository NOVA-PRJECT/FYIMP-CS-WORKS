// 16. write a program to read a paragraph and count the number of capital letters, small letters, numbers and special character

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int capital = 0, small = 0, digits = 0, special = 0;

    cout << "Enter a paragraph / line of text:" << endl;
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (ch >= 'A' && ch <= 'Z') {
            capital++;
        } else if (ch >= 'a' && ch <= 'z') {
            small++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch != ' ' && ch != '\t' && ch != '\n') {
            special++;
        }
    }

    cout << "\nAnalysis of the text:" << endl;
    cout << "Capital letters: " << capital << endl;
    cout << "Small letters: " << small << endl;
    cout << "Numbers: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
