// 19. write a program to find factorial and fibonacci using recursion

#include <iostream>
using namespace std;

// Recursive function for factorial
int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

// Recursive function for nth Fibonacci term
int fib(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int num, terms;

    cout << "Enter a number for factorial: ";
    cin >> num;
    cout << "Factorial = " << fact(num);

    cout << "\nEnter number of fibinocci terms : ";
    cin >> terms;
    cout << "Fibonacci series : \n";
    for (int i = 0; i < terms; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}
