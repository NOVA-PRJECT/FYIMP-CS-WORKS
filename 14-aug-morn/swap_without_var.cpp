#include <iostream>
using namespace std;

int main()
{
    int a=5, b=10;

    cout << "Before swap: \n a = " << a << "\n b = " << b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout << "After swap: \n a = " << a << "\n b = " << b<<endl;


    return 0;
}