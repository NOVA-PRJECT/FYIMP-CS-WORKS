#include <iostream>
using namespace std;

int main() {
    int numbers[100], size;
    cout << "Enter array size (1 to 100): ";
    cin >> size;
    if (size < 1 || size > 100) {
        cout << "Invalid size.\n";
        return 0;
    }

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    int maximum = numbers[0], minimum = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > maximum)
            maximum = numbers[i];
        if (numbers[i] < minimum)
            minimum = numbers[i];
    }

    cout << "Maximum: " << maximum << "\nMinimum: " << minimum << "\n";
    return 0;
}