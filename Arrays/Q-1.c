#include <stdio.h>
int main() {
    int n, i;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for(i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 int largest = arr[0];
 int second_largest = -999999;   
 for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
     } 
     else if(arr[i] > second_largest && arr[i] != largest) {
         second_largest = arr[i];
    }
}
    printf("Second largest number = %d\n", second_largest);
    return 0;
}
