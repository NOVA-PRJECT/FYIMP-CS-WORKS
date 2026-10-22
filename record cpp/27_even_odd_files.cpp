#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string inputName;
    cout << "Enter the input file name: ";
    cin >> inputName;

    ifstream inputFile(inputName);
    if (!inputFile) {
        cout << "Could not open the input file.\n";
        return 0;
    }

    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");
    if (!evenFile || !oddFile) {
        cout << "Could not create the output files.\n";
        return 0;
    }

    int number;
    while (inputFile >> number) {
        if (number % 2 == 0)
            evenFile << number << " ";
        else
            oddFile << number << " ";
    }

    cout << "Even numbers written to even.txt and odd numbers written to odd.txt.\n";
    return 0;
}