#include <iostream>
using namespace std;

int main()
{
    int a=5, b=10,temp;

    cout << "Before swap: \n a = " << a << "\n b = " << b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: \n a = " << a << "\n b = " << b;


    return 0;
}