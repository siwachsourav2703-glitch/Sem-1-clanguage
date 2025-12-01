#include <stdio.h>
long fact_rec(int n) {
    if(n == 0)
        return 1;
    return n * fact_rec(n - 1);
}
long fact_nonrec(int n) {
    long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if(r > n) {
        printf("Invalid! r cannot be greater than n.\n");
        return 0;
    }
    long fn = fact_rec(n);
    long fr = fact_nonrec(r);
    long fnr = fact_rec(n - r);
    long nCr = fn / (fr * fnr);
    printf("\nFactorial using recursion: %d! = %ld\n", n, fn);
    printf("Factorial using non-recursion: %d! = %ld\n", r, fr);
    printf("\nnCr = %ld\n", nCr);
    printf("\nTable of nCr values:\n");
    printf(" n   r    nCr\n");
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            long temp = fact_rec(i) / (fact_nonrec(j) * fact_rec(i-j));
            printf("%2d  %2d   %ld\n", i, j, temp);
        }
    }
    return 0;
}
