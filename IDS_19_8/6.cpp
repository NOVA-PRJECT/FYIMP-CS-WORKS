// 6. write a program to read two array of integers and check both are equal or not

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    if (n1 != n2) {
        cout << "Arrays are NOT equal (different size)." << endl;
        return 0;
    }

    bool equal = true;
    for (int i = 0; i < n1; i++) {
        if (arr1[i] != arr2[i]) {
            equal = false;
            break;
        }
    }

    if (equal) {
        cout << "Both arrays are equal." << endl;
    } else {
        cout << "Arrays are NOT equal." << endl;
    }

    return 0;
}
