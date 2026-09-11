#include <iostream>
using namespace std;

int Area(int a,int b) {
    return a * b;
}

int Area(int a) {
    return a * a;
}

int main() {
    cout << "Area of Square (side=5) : " << Area(5) << endl;
    cout << "Area of Rectangle (5,7) : " << Area(5,7) << endl;
    return 0;
}