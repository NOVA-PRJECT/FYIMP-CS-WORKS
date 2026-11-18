#include <iostream>
#include <string>
using namespace std;

int main() {
    string para;
    int upper = 0, lower = 0, digits = 0, special = 0;

    cout << "Enter a paragraph: ";
    getline(cin, para);

    for (int i = 0; i < para.length(); i++) {
        if (isupper(para[i]))
            upper++;
        else if (islower(para[i]))
            lower++;
        else if (isdigit(para[i]))
            digits++;
        else if (para[i] != ' ')
            special++;
    }

    cout << "Capital letters: " << upper << endl;
    cout << "Small letters: " << lower << endl;
    cout << "Numbers: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
