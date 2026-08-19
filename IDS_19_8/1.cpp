// 1. write a program to find the minimum of a set of 10 numbers

#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Minimum number is: " << min << endl;

    return 0;
}
