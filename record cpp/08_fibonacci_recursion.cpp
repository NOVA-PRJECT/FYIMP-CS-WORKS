#include <iostream>
using namespace std;

void printFibonacci(int terms, int first, int second) {
    if (terms <= 0)
        return;
    cout << first << " ";
    printFibonacci(terms - 1, second, first + second);
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    printFibonacci(terms, 0, 1);
    cout << "\n";
    return 0;
}