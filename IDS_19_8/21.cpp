// 21. write a program for implementing linear search

#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Element " << key << " found at index " << foundIndex << " (Position " << foundIndex + 1 << ")." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
