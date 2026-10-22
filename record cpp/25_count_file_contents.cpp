#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "Could not open sample.txt. Run program 24 first or create the file.\n";
        return 0;
    }

    string line, word;
    int characters = 0, words = 0, lines = 0;
    while (getline(file, line)) {
        lines++;
        characters += static_cast<int>(line.length());
        istringstream lineStream(line);
        while (lineStream >> word)
            words++;
    }

    cout << "Characters (excluding line breaks): " << characters << "\n";
    cout << "Words: " << words << "\n";
    cout << "Lines: " << lines << "\n";
    return 0;
}