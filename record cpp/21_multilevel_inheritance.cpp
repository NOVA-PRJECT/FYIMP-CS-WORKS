#include <iostream>
using namespace std;

class Student {
protected:
    int rollno;

public:
    void readrollno() {
        cout << "Enter rollno: ";
        cin >> rollno;
    }
};

class Test : public Student {
protected:
    int marks[3];

public:
    void readmarks() {
        readrollno();
        cout << "Enter marks in three subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
};

class Result : public Test {
public:
    void displayresult() {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Roll number: " << rollno << "\n";
        cout << "Total marks: " << total << "\n";
    }
};

int main() {
    Result student;
    student.readmarks();
    student.displayresult();
    return 0;
}