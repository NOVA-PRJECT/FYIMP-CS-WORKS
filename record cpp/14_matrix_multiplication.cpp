#include <iostream>
using namespace std;

int main() {
    int first[10][10], second[10][10], product[10][10] = {};
    int rows1, columns1, rows2, columns2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> columns1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> columns2;

    if (rows1 < 1 || rows1 > 10 || columns1 < 1 || columns1 > 10 ||
        rows2 < 1 || rows2 > 10 || columns2 < 1 || columns2 > 10 ||
        columns1 != rows2) {
        cout << "Invalid sizes. Columns of the first matrix must equal rows of the second.\n";
        return 0;
    }

    cout << "Enter the first matrix:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns1; j++)
            cin >> first[i][j];

    cout << "Enter the second matrix:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < columns2; j++)
            cin >> second[i][j];

    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns2; j++)
            for (int k = 0; k < columns1; k++)
                product[i][j] += first[i][k] * second[k][j];

    cout << "Product:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++)
            cout << product[i][j] << " ";
        cout << "\n";
    }
    return 0;
}