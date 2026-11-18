#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    cout << "Enter input file name: ";
    cin >> name;

    ifstream fin(name);
    if (!fin) { cout << "Could not open file." << endl; return 0; }

    ofstream even("even.txt"), odd("odd.txt");

    int n;
    while (fin >> n) {
        if (n % 2 == 0)
            even << n << " ";
        else
            odd << n << " ";
    }

    fin.close(); even.close(); odd.close();
    cout << "Even numbers written to even.txt, odd to odd.txt." << endl;
    return 0;
}
