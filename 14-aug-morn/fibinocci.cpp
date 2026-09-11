#include <iostream>
using namespace std;

int main() {
    int f=0,s=1;
    int n;
    cout<<"Enter number of terms ";
    cin>>n;
    cout<<"Fibinocci series \n";

    cout<<f<<"\t"<<s;
    
    int t;

    for (int i = 1; i <= n-2; i++) {
        t=f+s;

        cout<<"\t"<<t;

        f=s;
        s=t;
    }

    return 0;
}
