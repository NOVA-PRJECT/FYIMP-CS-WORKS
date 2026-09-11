#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 3.141592653589;
    char d = 'A';
    bool e = true;

    cout << "Data Type\t Value\t Size (bytes)"<< endl;
    cout << "int\t "<< a <<"\t"<<sizeof(a) << endl;
    cout << "float\t "<< b <<"\t"<<sizeof(b) << endl;
    cout << "char\t "<< d <<"\t"<<sizeof(d) << endl;
    cout << "boolean\t "<< e <<"\t"<<sizeof(e) << endl;
    cout << "double\t "<< c <<"\t"<<sizeof(c) << endl;
    return 0;
}