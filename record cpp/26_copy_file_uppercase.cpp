#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    string sourceName, destinationName;
    cout << "Enter source file name: ";
    cin >> sourceName;
    cout << "Enter destination file name: ";
    cin >> destinationName;

    ifstream source(sourceName);
    if (!source) {
        cout << "Could not open the source file.\n";
        return 0;
    }

    ofstream destination(destinationName);
    if (!destination) {
        cout << "Could not create the destination file.\n";
        return 0;
    }

    char character;
    while (source.get(character))
        destination.put(static_cast<char>(toupper(static_cast<unsigned char>(character))));

    cout << "File copied in uppercase.\n";
    return 0;
}