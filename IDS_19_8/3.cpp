// 3. write a program to print highest and low element from n number of elements

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total N: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int high = arr[0];
    int low = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > high) {
            high = arr[i];
        }
        if (arr[i] < low) {
            low = arr[i];
        }
    }

    cout << "Max: " << high << endl;
    cout << "Min: " << low << endl;

    return 0;
}
