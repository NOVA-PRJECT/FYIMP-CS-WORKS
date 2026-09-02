// 18. write a program to read a passage and count number of words, characters, lines, vowels and special characters

#include <iostream>
using namespace std;

int main() {
    char ch;
    int words = 0, characters = 0, lines = 0, vowels = 0, special = 0;
    bool inWord = false;

    cout << "Enter a passage (end your passage with $ symbol):" << endl;

    while (cin.get(ch) && ch != '$') {
        characters++;

        // Check for vowels
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowels++;
        }

        // Check for lines
        if (ch == '\n') {
            lines++;
        }

        // Check for words
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = false;
        } else {
            if (!inWord) {
                words++;
                inWord = true;
            }
        }

        // Check for special characters (not alphabet, not digit, not whitespace)
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == ' ' || ch == '\t' || ch == '\n')) {
            special++;
        }
    }

    // If passage had characters but didn't end with a newline, count at least 1 line
    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    cout << "\n--- Passage Statistics ---" << endl;
    cout << "Total Characters: " << characters << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Lines: " << lines << endl;
    cout << "Total Vowels: " << vowels << endl;
    cout << "Total Special Characters: " << special << endl;

    return 0;
}
