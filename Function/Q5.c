#include<stdio.h>
void checkEvenodd(int num){
    if (num % 2 == 0)
      printf("%d is even. \n", num);
    else
        printf("%d is odd. \n", num);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    CheckEvenOdd(n);
    return 0;
}



