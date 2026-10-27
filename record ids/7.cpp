#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Invalid dimensions." << endl;
        return 0;
    }

    int a[50][50], b[50][50], result[50][50];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    int choice;
    cout << "\nChoose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = a[i][j] + b[i][j];
            }
        }
        cout << "\nResult of Matrix Addition:" << endl;
    } else if (choice == 2) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = a[i][j] - b[i][j];
            }
        }
        cout << "\nResult of Matrix Subtraction:" << endl;
    } else {
        cout << "Invalid choice." << endl;
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
