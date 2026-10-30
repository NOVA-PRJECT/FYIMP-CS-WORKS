#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno; string name;
    float marks[3],total=0,percentage;

    void readetails() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];total += marks[i];}
        percentage = total / 3;
    }

    void displaydetails() {
        cout << "Roll number: " << rollno <<endl;
        cout << "Name: " << name <<endl;
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main() {
    Student students[3];            // <-- Changed 5 to 3
    for (int i = 0; i < 3; i++) {   // <-- Changed 5 to 3
        cout << "Student " << i + 1 << endl;
        students[i].readetails();
    }

    int highest = 0;
    for (int i = 0; i < 2; i++)     // <-- Changed 4 to 2
        if (students[i].percentage < students[i+1].percentage)
            highest = i+1;

    cout << "Student with the highest percentage:\n";
    students[highest].displaydetails();
    return 0;
}                   