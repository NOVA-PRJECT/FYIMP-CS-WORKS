#include <iostream>
using namespace std;

class Time {
public:
    int hours, min, sec;

    void readTime() {
        cout << "Enter hours, minutes, and seconds: ";
        cin >> hours >> min >> sec;
    }

    Time add(Time other) {
        Time result;
        result.sec = sec + other.sec;
        result.min = min + other.min + result.sec / 60;
        result.sec %= 60;
        result.hours = hours + other.hours + result.min / 60;
        result.min %= 60;
        return result;
    }

    void display() {
        cout << hours << " hours " << min << " minutes " << sec << " seconds";
    }
}; 

int main() {
    Time first, second, total;
    cout << "First time: "<<endl;
    first.readTime();
    cout << "Second time: "<<endl;
    second.readTime();
    total = first.add(second);
    cout << "Sum: ";
    total.display();
    return 0;
}