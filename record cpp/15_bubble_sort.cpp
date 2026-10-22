#include <iostream>
using namespace std;

int main() {
    int numbers[100], size;
    cout << "Enter number of elements (1 to 100): ";
    cin >> size;
    if (size < 1 || size > 100) {
        cout << "Invalid size.\n";
        return 0;
    }

    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (numbers[j] > numbers[j + 1]) {
                int temporary = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temporary;
            }

    cout << "Ascending order: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";
    cout << "\n";
    return 0;
}