#include <iostream>
using namespace std;

class Box {
    double length, breadth, height;

public:
    Box() {
        length = breadth = height = 1;
    }

    Box(double side) {
        length = breadth = height = side;
    }

    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double volume() {
        return length * breadth * height;
    }
};

int main() {
    Box defaultBox;
    Box cube(3);
    Box rectangularBox(2, 3, 4);

    cout << "Default box vol: " << defaultBox.volume() << "\n";
    cout << "Cube vol: " << cube.volume() <<endl;
    cout << "Rectangled vol: " << rectangularBox.volume();
    return 0;
}