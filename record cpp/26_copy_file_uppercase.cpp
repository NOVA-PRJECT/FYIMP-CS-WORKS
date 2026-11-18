#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string src, dest;
    cout << "Enter source file name: ";
    cin >> src;
    cout << "Enter destination file name: ";
    cin >> dest;

    ifstream fin(src);
    if (!fin) { cout << "Could not open source file." << endl; return 0; }

    ofstream fout(dest);
    if (!fout) { cout << "Could not create destination file." << endl; return 0; }

    char ch;
    while (fin.get(ch)) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fout.put(ch);
    }

    fin.close();
    fout.close();
    cout << "File copied in uppercase." << endl;
    return 0;
}
