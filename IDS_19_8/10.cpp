// 10. write a program to merge two arrays

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of both : ";
    cin >> n1>>n2 ;
    int ar1[n1],ar2[n2];
    cout << "Enter first :";
    for (int i = 0; i < n1; i++) { cin>>ar1[i];}

    cout << "Enter second : ";
    for (int i = 0; i < n2; i++) {
        cin >> ar2[i];
    }

    int merged[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = ar1[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = ar2[i];
    }

    cout << "Merged array:" << endl;
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
