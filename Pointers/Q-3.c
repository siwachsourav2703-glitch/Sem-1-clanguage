#include <stdio.h>
void updateValues(int *x, float *y, char *z) {
    *x = *x + 5;    
    *y = *y + 2.5;   
    *z = 'Z';        
}
int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';
    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);
    updateValues(&a, &b, &c); 
    printf("After function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    return 0;
}
