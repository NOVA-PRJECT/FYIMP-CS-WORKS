// 4. write a program to find average of N numbers

#include <iostream>
using namespace std;

int main() { int n;
    cout << "Enter total numbers : ";
    cin >> n;

    int arr[n],sum=0;
    cout << "Enter " << n << " numbers:";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }


    int avg = sum / n;
    cout << "Average = " << avg << endl;

    return 0;
}
