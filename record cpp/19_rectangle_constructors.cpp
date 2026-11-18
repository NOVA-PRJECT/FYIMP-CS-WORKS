#include <iostream>
using namespace std;

class Rectangle {
  double length, breadth;

public:
  Rectangle() {
    length = 1;
    breadth = 1;
  }

  Rectangle(double l, double b) {
    length = l;
    breadth = b;
  }

  Rectangle(const Rectangle &other) {
    length = other.length;
    breadth = other.breadth;
  }

  double area() { return length * breadth; }
};

int main() {
  Rectangle first;
  Rectangle second(5, 3);
  Rectangle third(second);

  cout << "Default area: " << first.area() << endl;
  cout << "Parameterized area: " << second.area() << endl;
  cout << "Copy area: " << third.area() << endl;
  return 0;
}