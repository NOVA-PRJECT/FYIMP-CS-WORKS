#include <iostream>
using namespace std;

int main() {
    int numbers[100], size, sum = 0;
    cout << "Enter array size (1 to 100): ";
    cin >> size;
    if (size < 1 || size > 100) {
        cout << "Invalid size.\n";
        return 0;
    }

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum: " << sum << "\n";
    cout << "Average: " << static_cast<double>(sum) / size << "\n";
    return 0;
}