#include <stdio.h>
int isPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (original == reversed)
        return 1; 
    else
        return 0;  
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);
    return 0;
}
