// 7. write a program to traverse throw n elements in an array and print each

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Traversing array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
