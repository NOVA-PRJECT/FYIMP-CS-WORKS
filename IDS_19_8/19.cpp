// 19. write a program to find factorial and fibonacci using recursion

#include <iostream>
using namespace std;

// Recursive function for factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Recursive function for nth Fibonacci term
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num, terms;

    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    cout << "\nEnter number of terms for Fibonacci series: ";
    cin >> terms;
    cout << "Fibonacci series up to " << terms << " terms:" << endl;
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
