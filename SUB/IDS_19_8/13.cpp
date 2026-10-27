// 13. write a program to subtract two matrix

#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int a[r][c], b[r][c], diff[r][c];

    cout << "\nEnter elements of first matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of second matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    // Subtracting matrices
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "\nDifference of the two matrices (Matrix 1 - Matrix 2):" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << diff[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
