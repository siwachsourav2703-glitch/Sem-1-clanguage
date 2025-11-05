#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0, digit;
    while (num != 0) {
        digit = num % 10;   
        sum = sum + digit;  
        num = num / 10;     
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumOfDigits(n));
    return 0;
}
