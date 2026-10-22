#include <iostream>
using namespace std;

class Internal {
protected:
    int internalMarks;

public:
    void readInternalMarks() {
        cout << "Enter internal marks: ";
        cin >> internalMarks;
    }
};

class External {
protected:
    int externalMarks;

public:
    void readExternalMarks() {
        cout << "Enter external marks: ";
        cin >> externalMarks;
    }
};

class Final : public Internal, public External {
public:
    void displayResult() {
        int total = internalMarks + externalMarks;
        cout << "Total marks: " << total << "\n";
        if (total >= 80)
            cout << "Grade: A\n";
        else if (total >= 60)
            cout << "Grade: B\n";
        else if (total >= 40)
            cout << "Grade: C\n";
        else
            cout << "Grade: F\n";
    }
};

int main() {
    Final result;
    result.readInternalMarks();
    result.readExternalMarks();
    result.displayResult();
    return 0;
}