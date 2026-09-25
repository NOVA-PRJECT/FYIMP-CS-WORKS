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

    int f = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            f = i;
            break;
        }
    }

    if (f != -1) {
        cout << "Element found at "<<f+1;
    } else {
        cout << "Element not found ";
    }

    return 0;
}
