#include <iostream>
using namespace std;

int main() {
    int numbers[100], size, target, position = -1;
    cout << "Enter array size (1 to 100): ";
    cin >> size;
    if (size < 1 || size > 100) {
        cout << "Invalid size.\n";
        return 0;
    }

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    cout << "Enter the element to search for: ";
    cin >> target;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            position = i;
            break;
        }
    }

    if (position == -1)
        cout << "Element not found.\n";
    else
        cout << "Element found at position " << position + 1 << ".\n";
    return 0;
}