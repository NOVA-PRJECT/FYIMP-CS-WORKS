// 11. write a program to create a matrix with m*n size with integer values and print all elements in the matrix and corresponding address

#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter row and column \n";
    cin>>m>>n;


    int matrix[m][n];

    cout << "Enter elements \n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix of size "<<m<<"x"<<n<<" is\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];}
            cout<<endl;
        }
    

    return 0;
}
