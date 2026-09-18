#include <iostream>
using namespace std;

void tobin(int n) {
    if (n == 0) { cout << 0; return; }
    int bin[32], i = 0;
    while (n > 0) { bin[i++] = n % 2; n /= 2; }
    for (int j = i - 1; j >= 0; j--) cout << bin[j];
}

int todec(int n) {
    int dec = 0, base = 1;
    while (n > 0) { dec += (n % 10) * base; n /= 10; base *= 2; }
    return dec;
}

int main() {
    int c;
    cout << "Enter 1 for dec to bin \n 2 for bin to dec ";
    cin >> c;
    if (c == 1) {
        int n; cout << "Enter decimal: "; cin >> n;
        cout << "Binary: "; tobin(n);
    } else {
        int n; cout << "Enter binary: "; cin >> n;
        cout << "Decimal: " << todec(n);
    }

    return 0;
}