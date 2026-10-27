#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "Invalid matrix dimensions." << endl;
        return 0;
    }

    int matrix[50][50];

    cout << "Enter elements of the matrix (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix elements and their corresponding memory addresses:" << endl;
    cout << "Row\tCol\tValue\tAddress" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << "\t" << j << "\t" << matrix[i][j] << "\t" << &matrix[i][j] << endl;
        }
    }

    return 0;
}
