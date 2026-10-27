#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a limit : ";
    cin>>n;

    int i=1;
    int fact=1;

    while(i<=n)
    {
        fact=fact*i;
        i++;    
    }

    // extended for summation

    i=1;
    int sum=0;

    while(i<=n)
    {
        sum=sum+i;
        i++;    
    }    

    cout<<"Factorial of "<<n<<" is "<<fact;
    cout<<"\nSum of first "<<n<<" is "<<sum<<"\n";

}