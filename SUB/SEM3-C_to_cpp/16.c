/*
 * Question 16: Read an integer and calculate the sum of its digits.
 */

#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}
