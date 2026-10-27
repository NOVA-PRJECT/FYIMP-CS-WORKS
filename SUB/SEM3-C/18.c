/*
 * Question 18: Find the greatest common divisor (GCD) and least common multiple (LCM) of two numbers.
 */

#include <stdio.h>

int main() {
    int a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int n1 = a, n2 = b;
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    gcd = n1;
    lcm = (a * b) / gcd;

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
