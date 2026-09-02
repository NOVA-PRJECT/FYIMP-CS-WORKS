// 11. write a program to create a matrix with m*n size with integer values and print all elements in the matrix and corresponding address

#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int matrix[m][n];

    cout << "Enter elements of the matrix (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix elements and their memory addresses:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i << "][" << j << "] = " << matrix[i][j] 
                 << "  |  Address = " << &matrix[i][j] << endl;
        }
    }

    return 0;
}
