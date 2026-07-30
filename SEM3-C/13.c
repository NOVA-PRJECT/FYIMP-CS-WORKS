/*
 * Question 13: Check if a string is a palindrome.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("%s is a Palindrome.\n", str);
    } else {
        printf("%s is NOT a Palindrome.\n", str);
    }

    return 0;
}
