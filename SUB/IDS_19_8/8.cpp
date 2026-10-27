// 8. write a program to add an element to the array at the beginning, end and the middle position

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, choice, element, pos;

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nWhere to add the new element:\n1 -> At the beginning\n2 -> At the middle / specific position\n3 -> At the end\nEnter your choice: ";
    cin >> choice;

    cout << "Enter the element to insert: ";
    cin >> element;

    switch (choice) {
        case 1:
            // Shift all elements to the right
            for (int i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = element;
            n++;
            break;

        case 2:
            cout << "Enter position to insert (1 to " << n + 1 << "): ";
            cin >> pos;
            if (pos < 1 || pos > n + 1) {
                cout << "Invalid position!" << endl;
                return 0;
            }
            for (int i = n; i >= pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = element;
            n++;
            break;

        case 3:
            arr[n] = element;
            n++;
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "\nArray after insertion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}