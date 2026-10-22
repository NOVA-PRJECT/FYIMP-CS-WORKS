#include <iostream>
using namespace std;

int main() {
    int first[10][10], second[10][10], rows, columns;
    cout << "Enter rows and columns (maximum 10): ";
    cin >> rows >> columns;
    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        cout << "Invalid matrix size.\n";
        return 0;
    }

    cout << "Enter the first matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> first[i][j];

    cout << "Enter the second matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> second[i][j];

    cout << "Sum:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << first[i][j] + second[i][j] << " ";
        cout << "\n";
    }

    cout << "Difference (first - second):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << first[i][j] - second[i][j] << " ";
        cout << "\n";
    }
    return 0;
}