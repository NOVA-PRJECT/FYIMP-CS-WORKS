#include <iostream>
#include <string>
using namespace std;

int main() {
    string line, para = "";
    int words = 0, chars = 0, lines = 0, vowels = 0, special = 0;

    cout << "Enter a passage (press Enter twice to stop):" << endl;
    while (getline(cin, line)) {
        if (line.empty()) break;
        para += line + "\n";
        lines++;
    }

    for (int i = 0; i < para.length(); i++) {
        if (para[i] == '\n') continue;

        chars++;

        if (para[i] == ' ') continue;

        char c = tolower(para[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else if (!isalnum(para[i]))
            special++;
    }

    // Count words by counting spaces + 1 per line
    for (int i = 0; i < para.length(); i++) {
        if (para[i] != ' ' && (i == 0 || para[i - 1] == ' ' || para[i - 1] == '\n'))
            words++;
    }

    cout << "Words: " << words << endl;
    cout << "Characters: " << chars << endl;
    cout << "Lines: " << lines << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
