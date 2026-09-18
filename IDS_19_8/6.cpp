#include <iostream>
using namespace std;

int main() { int n1, n2;
    cout<<"Enter the total for first & second array : ";
    cin >> n1>>n2; int ar1[n1],ar2[n2];

        if (n1 != n2) {
        cout << "Not equal";
        return 0;
    }

    cout<<"Enter first array : ";
    for (int i = 0; i < n1; i++) cin >> ar1[i];

    cout<<"Enter second array : ";
    for (int i = 0; i < n2; i++) cin >> ar2[i];


    for (int i = 0; i < n1; i++) {
        if (ar1[i] != ar2[i]) {
            cout << "Not equal";
            return 0;
        }
    }

    cout << "Equal";
    return 0;
}
