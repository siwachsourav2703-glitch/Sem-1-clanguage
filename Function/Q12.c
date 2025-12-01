#include <stdio.h>
int GCD(int a, int b) {
    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int result = GCD(num1, num2);
    printf("GCD of %d and %d = %d\n", num1, num2, result);
    return 0;
}
