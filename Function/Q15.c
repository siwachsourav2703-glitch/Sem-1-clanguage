#include <stdio.h>
#include <string.h>
void REVERSE(char str[]) {
    int i, j;
    char temp;
    i = 0;
    j = strlen(str) - 1;
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    REVERSE(str);
    printf("Reversed string = %s\n", str);
    return 0;
}
