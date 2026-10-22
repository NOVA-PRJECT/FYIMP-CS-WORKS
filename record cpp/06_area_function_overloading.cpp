#include <iostream>
using namespace std;

double area(int side) {
    return side * side;
}

double area(double radius) {
    return 3.14 * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

int main() {
    int side;
    double radius, length, breadth;

    cout << "Enter square side: ";
    cin >> side;
    cout << "Square area: " << area(side) << "\n";

    cout << "Enter rectangle length and breadth: ";
    cin >> length >> breadth;
    cout << "Rectangle area: " << area(length, breadth) << "\n";

    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Circle area: " << area(radius) << "\n";
    return 0;
}