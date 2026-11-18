#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements in sorted order:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid, pos = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        } else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (pos != -1)
        cout << key << " found at position " << pos + 1 << endl;
    else
        cout << key << " not found" << endl;

    return 0;
}

