// 4. write a program to find average of N numbers

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the total count of numbers (N): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:" << endl;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   
                 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int average = sum / n;
    cout << "Average of the numbers: " << average << endl;

    return 0;
}
