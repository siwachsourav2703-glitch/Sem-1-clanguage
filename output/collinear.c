#include<stdio.h>
int main(){
    int x1,x2,x3;
    int y1,y2,y3;
   printf("Enter x1,y1: ");
   scanf("%d %d",&x1,&y1);
   printf("Enter x2,y2: ");
   scanf("%d %d",&x2,&y2);
    printf("Enter x3,y3: ");
   scanf("%d %d",&x3,&y3);
   if((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) == 0){
   printf("Collinear\n");
   }
   else{
   printf("Not collinear\n");
}
    return 0;
}