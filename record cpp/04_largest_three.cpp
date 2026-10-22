#include <iostream>
using namespace std;

int main() {
    int first, second, third;
    cout << "Enter three numbers: ";
    cin >> first >> second >> third;

    int largest = first;
    if (second > largest)
        largest = second;
    if (third > largest)
        largest = third;

    cout << "Largest number: " << largest << "\n";
    return 0;
}