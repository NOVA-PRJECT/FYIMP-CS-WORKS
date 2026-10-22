#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    float marks[3];
    float total;
    float percentage;

    void readDetails() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter name: ";
        getline(cin >> ws, name);
        total = 0;
        cout << "Enter marks in three subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
            total += marks[i];
        }
        percentage = total / 3;
    }

    void displayDetails() {
        cout << "Roll number: " << rollNumber << "\n";
        cout << "Name: " << name << "\n";
        cout << "Total marks: " << total << "\n";
        cout << "Percentage: " << percentage << "%\n";
    }
};

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << "\n";
        students[i].readDetails();
    }

    int highest = 0;
    for (int i = 1; i < 5; i++)
        if (students[i].percentage > students[highest].percentage)
            highest = i;

    cout << "\nStudent with the highest percentage:\n";
    students[highest].displayDetails();
    return 0;
}