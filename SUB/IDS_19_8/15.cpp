// 15. program to print mark of students in sem one and sem two

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    float sem1[n], sem2[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter marks for Student " << i + 1 << ":" << endl;
        cout << "Semester 1 Marks: ";
        cin >> sem1[i];
        cout << "Semester 2 Marks: ";
        cin >> sem2[i];
    }

    cout << "\n--- Student Semester Marks ---" << endl;
    cout << "Roll No\tSem 1\tSem 2\tTotal" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << sem1[i] << "\t" << sem2[i] << "\t" << (sem1[i] + sem2[i]) << endl;
    }

    return 0;
}
