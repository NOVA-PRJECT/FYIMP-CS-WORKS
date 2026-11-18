#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "Could not open sample.txt." << endl;
        return 0;
    }

    string line;
    int characters = 0, words = 0, lines = 0;

    while (getline(file, line)) {
        lines++;
        characters += line.length();

        for (int i = 0; i < line.length(); i++) {
            if (line[i] != ' ' && (i == 0 || line[i - 1] == ' '))
                words++;
        }
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}
