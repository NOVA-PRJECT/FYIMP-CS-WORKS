#include <iostream>
using namespace std;

int main() {
    int matrix[10][10], rows, columns;
    cout << "Enter rows and columns (maximum 10): ";
    cin >> rows >> columns;
    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        cout << "Invalid matrix size.\n";
        return 0;
    }

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];

    cout << "Transpose:\n";
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    return 0;
}