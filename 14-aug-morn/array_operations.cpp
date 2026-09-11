#include <iostream>
using namespace std;

int Sumavg(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {sum += arr[i];}
    cout << "Total Sum = " << sum <<endl; 
    cout << "Avg = " << (float)sum / n << endl;
}

int  minmax(int arr[], int n) {
    int max,min;
    max =  min = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << endl;
}



int main() {
    int n;
    cout << "Enter Total numbers : "; cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    Sumavg(arr, n);
    minmax(arr, n);
    return 0;
}