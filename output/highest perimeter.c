#include<stdio.h>
int main(){
    int l1,l2,l3;
    int b1,b2,b3;
    int p1,p2,p3,max;
    printf("Enter lenght and breath of rectangle 1: ");
    scanf("%d %d",&l1,&b1);
    printf("Enter lenght and breath of rectangle 2: ");
    scanf("%d %d",&l2,&b2);
     printf("Enter lenght and breath of rectangle 3: ");
    scanf("%d %d",&l3,&b3); 
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);
    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);
    printf("Maximum perimeter is: %d\n",max);
    return 0;

}