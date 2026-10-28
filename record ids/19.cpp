#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students : ";
    cin>>n;

    string name[n],temp;

    cout<<"Enter name of students\n";
    for(int i=0;i<n;i++){
        cin>>name[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(name[j]>name[j+1]){
                temp = name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
            }
        }
    }

    cout << "\nNames in Ascending Order:\n";
    for (int i = 0; i < n; i++) {
      cout << name[i] << endl;
    }

    cout << "\nNames in Descending Order:\n";
    for (int i = n - 1; i >= 0; i--) {
     cout << name[i] << endl;
    }
    
    return 0;

}