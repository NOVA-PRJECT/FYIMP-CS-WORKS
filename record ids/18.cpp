#include <iostream>
using namespace std;

int main() {
    int rows, cols, count = 0;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] != 0)
                count++;
        }

    int sparse[100][3];
    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = count;

    int k = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }

    cout << "\nSparse Matrix Representation:" << endl;
    cout << "Row\tCol\tValue" << endl;
    for (int i = 0; i <= count; i++)
        cout << sparse[i][0] << "\t" << sparse[i][1] << "\t" << sparse[i][2] << endl;

    return 0;
}

