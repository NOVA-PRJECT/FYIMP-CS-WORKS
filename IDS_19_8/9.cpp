// 9. write a program to delete an element from the array at the beginning, end and arbitrary position

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, choice, pos;

    cout << "Enter number of elements in array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array is empty!" << endl;
        return 0;
    }

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nWhere to delete the element from:" << endl;
    cout << "1 -> From the beginning" << endl;
    cout << "2 -> From an arbitrary position" << endl;
    cout << "3 -> From the end" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            // Shift elements to the left
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            break;

        case 2:
            cout << "Enter position to delete (1 to " << n << "): ";
            cin >> pos;
            if (pos < 1 || pos > n) {
                cout << "Invalid position!" << endl;
                return 0;
            }
            for (int i = pos - 1; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            break;

        case 3:
            n--;
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "\nArray after deletion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
