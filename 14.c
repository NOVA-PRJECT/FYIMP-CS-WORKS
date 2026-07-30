/*
 * Question 14: Generate the first 10 terms of the Fibonacci sequence using a loop.
 */

#include <stdio.h>

int main() {
    int a = 0, b = 1, next;

    printf("First 10 terms of Fibonacci sequence:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
