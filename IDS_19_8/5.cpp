// 5. write a program to find grade point and credit point for all the 28 students

#include <iostream>
using namespace std;

int main() {
    int n = 28;
    float gradePoints[28];
    int credits[28];
    float totalPoints[28];

    cout << "Enter details for 28 students:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Enter Grade Point (e.g. 8.5): ";
        cin >> gradePoints[i];
        cout << "Enter Credit: ";
        cin >> credits[i];

        totalPoints[i] = gradePoints[i] * credits[i];
    }

    cout << "\n--- Student Grade & Credit Details ---" << endl;
    cout << "Roll No\tGrade Point\tCredits\tTotal Points" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << gradePoints[i] << "\t\t" << credits[i] << "\t" << totalPoints[i] << endl;
    }

    return 0;
}
