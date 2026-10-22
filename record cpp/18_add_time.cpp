#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void readTime() {
        cout << "Enter hours, minutes, and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    Time add(Time other) {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + other.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds\n";
    }
};

int main() {
    Time first, second, total;
    cout << "First time:\n";
    first.readTime();
    cout << "Second time:\n";
    second.readTime();
    total = first.add(second);
    cout << "Sum: ";
    total.display();
    return 0;
}