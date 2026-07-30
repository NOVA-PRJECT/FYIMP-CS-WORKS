/*
 * Question 1: Read an integer from the user and print its square.
 */

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sq=num*num;
    printf("Square of the number %d is %d",num,sq);
    return 0;
}
