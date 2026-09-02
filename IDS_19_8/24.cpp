// 24. write a program for sorting all the students name in descending and ascending order

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string names[n];

    cout << "Enter names of " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sort in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "\nStudent names in Ascending Order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    // Sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] < names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "\nStudent names in Descending Order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
