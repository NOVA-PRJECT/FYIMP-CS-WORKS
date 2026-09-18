// 17. program to check a string is palindrome or not

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter the string: ";
    cin >> str;

    int left = 0,right = str.length() - 1;
    bool isP = true;

    while (left < right) {
        if (str[left] != str[right]) {
            isP = false;
            break;
        }
        left++; right--;
    }

    if (isP) cout << str << " is a palindrome.";
    else 
        cout << str << " is not a palindrome.";

    return 0;
}
