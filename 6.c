/*
 * Question 6: Calculate the sum of the first 10 natural numbers using a loop.
 */

#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    printf("Sum of first 10 natural numbers is %d\n", sum);

    return 0;
}
