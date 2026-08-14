#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter value for A: ";
    cin >> a;
    cout << "Enter value for B: ";
    cin >> b;
    cout << "Values before swap:\nA = " << a << "\tB = " << b << endl;

    int t = a;
    a = b;
    b = t;

    cout << "Values after swap:\nA = " << a << "\tB = " << b << endl;

    return 0;
}