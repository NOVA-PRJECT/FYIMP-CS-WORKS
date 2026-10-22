#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outputFile("sample.txt");
    if (!outputFile) {
        cout << "Could not create the file.\n";
        return 0;
    }

    outputFile << "This is some text written to the file.\n";
    outputFile.close();
    cout << "File created and text written.\n";

    ifstream inputFile("sample.txt");
    if (!inputFile) {
        cout << "Could not open the file for reading.\n";
        return 0;
    }

    string line;
    cout << "File contents:\n";
    while (getline(inputFile, line))
        cout << line << "\n";
    inputFile.close();
    return 0;
}