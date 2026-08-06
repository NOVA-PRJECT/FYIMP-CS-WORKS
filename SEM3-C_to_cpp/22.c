/*
 * Question 22: Implement linear search to find an element in an array.
 */

#include <stdio.h>

int main() {
    int n, key, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element %d found at position %d (index %d)\n", key, found + 1, found);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
