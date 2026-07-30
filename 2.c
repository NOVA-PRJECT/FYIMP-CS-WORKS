/*
 * Question 2: Write a program to add, subtract, multiply, and divide two numbers.
 */

#include <stdio.h>

int main() {
    int a, b;
    int div;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    int sum = a + b;
    int dif = a - b;
    int pr = a * b;

    printf("The sum of %d and %d is %d \n", a, b, sum);
    printf("The difference of %d and %d is %d \n", a, b, dif);
    printf("The product of %d and %d is %d \n", a, b, pr);

    if (b == 0) {     
        printf("Cannot divide by zero\n");
    } else {
        div = a / b;
        printf("The division of %d and %d is %d \n", a, b, div);
    }

    return 0;
}
