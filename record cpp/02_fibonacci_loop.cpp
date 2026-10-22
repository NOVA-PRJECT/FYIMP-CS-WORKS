#include <iostream>
using namespace std;

int main() {
    int terms;
    int first = 0, second = 1;

    cout << "Enter the number of terms: ";
    cin >> terms;

    for (int i = 0; i < terms; i++) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    cout << "\n";
    return 0;
}