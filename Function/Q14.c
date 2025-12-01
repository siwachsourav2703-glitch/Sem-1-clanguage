#include <stdio.h>
int ISPRIME(int num) {
    if(num <= 1)
        return 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;   
}
int main() {
    int start, end;
    printf("Enter starting range: ");
    scanf("%d", &start);
    printf("Enter ending range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for(int i = start; i <= end; i++) {
        if(ISPRIME(i) == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
