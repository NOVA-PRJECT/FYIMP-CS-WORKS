#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    void readRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

class Test : public Student {
protected:
    int marks[3];

public:
    void readMarks() {
        readRollNumber();
        cout << "Enter marks in three subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
};

class Result : public Test {
public:
    void displayResult() {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Roll number: " << rollNumber << "\n";
        cout << "Total marks: " << total << "\n";
    }
};

int main() {
    Result student;
    student.readMarks();
    student.displayResult();
    return 0;
}