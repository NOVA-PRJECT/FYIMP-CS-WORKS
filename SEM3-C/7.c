/*
 * Question 7: Write a function to calculate the factorial of a number.
 */

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact=factorial(num);
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}
