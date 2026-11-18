#include <iostream>
using namespace std;

class Internal {
protected:
    int intmark;

public:
    void readintmark() {
        cout << "Enter internal marks: ";
        cin >> intmark;
    }
};

class External {
protected:
    int extmark;

public:
    void readextmark() {
        cout << "Enter external marks: ";
        cin >> extmark;
    }
};

class Final : public Internal, public External {
public:
    void displayresult() {
        int total = intmark + extmark;
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
    result.readintmark();
    result.readextmark();
    result.displayresult();
    return 0;
}