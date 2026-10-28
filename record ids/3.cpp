#include<iostream>
using namespace std;
int main(){
    int c,n,element,arr[100];
    cout<<"Enter total number of elements in array :";
    cin>>n;
    cout<<"Enter the array\n";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter\n1 for insertion at beginning\n2 for insertion at end\n3 for insertion at random place"<<endl;
    cin>>c;

    int place;
    if(c==3){
        cout<<"Enter required place : ";
        cin>>place;
        if(place<0 || place>n){
            cout<<"Place is out of bound";
            return 0;
        }
    }

    cout<<"Enter the element : ";
    cin>>element;

    switch(c){
        case 1 :
                    for(int i=n;i>=1;i--){
                        arr[i]=arr[i-1];     
                    }
                    arr[0]=element;
                    break;

        case 2 : arr[n]=element;
                    break;

        case 3 : 
                 for( int i=n;i>place;i--){
                    arr[i]=arr[i-1];    
                 }
                 arr[place]=element;
                 break;    
                 
        default : cout<<"Invalid option.";
    }
    cout<<"The new array is ";
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }
