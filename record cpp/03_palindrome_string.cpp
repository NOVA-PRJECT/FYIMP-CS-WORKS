#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    bool palindrome = true;

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0, j = static_cast<int>(text.length()) - 1; i < j; i++, j--) {
        if (text[i] != text[j]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";
    return 0;
}