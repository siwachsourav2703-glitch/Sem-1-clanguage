#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    printf("Original Addresses:\n");
    printf("p1 (int pointer)  = %p\n", p1);
    printf("p2 (float pointer)= %p\n", p2);
    printf("p3 (char pointer) = %p\n\n", p3);
    p1++;   
    p2++;   
    p3++;   
    printf("After Increment:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n\n", p3);
    p1--;   
    p2--;
    p3--;   
    printf("After Decrement (Back to original):\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);
    return 0;
}
