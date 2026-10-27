#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[100];
    cout << "Enter " << n1 << " elements of first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[100];
    cout << "Enter " << n2 << " elements of second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    if (n1 != n2) {
        cout << "The arrays are not equal (different sizes)." << endl;
        return 0;
    }

    bool isEqual = true;
    for (int i = 0; i < n1; i++) {
        if (arr1[i] != arr2[i]) {
            isEqual = false;
            break;
        }
    }

    if (isEqual) {
        cout << "Both arrays are equal." << endl;
    } else {
        cout << "Both arrays are not equal." << endl;
    }

    return 0;
}
