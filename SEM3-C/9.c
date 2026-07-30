/*
 * Question 9: Find the largest element in an array.
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element is %d\n", max);

    return 0;
}
