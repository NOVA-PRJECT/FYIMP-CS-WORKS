/*
 * Question 4: Find the largest of two numbers using conditional statements.
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is larger.\n", a);
    } else if (b > a) {
        printf("%d is larger.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
