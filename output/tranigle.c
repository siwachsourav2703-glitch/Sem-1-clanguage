#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of traingle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a + b > c && c + a > b && b + a > c ){
        printf("Traingle is valid\n");
    if (a == b && b == c){
        printf("Traingle is equilateral\n");
    }
     else if (a == b || b == c || c == a){
        printf("Traingle is isocsceles\n");
     }
     else if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a) ){
        printf("Traingle is right angle traingle\n");
     }
    else{
        printf("Traingle is scalene\n");
    }
    }
    else{
        printf("Traingle is not valid\n");
    }
    return 0;
}