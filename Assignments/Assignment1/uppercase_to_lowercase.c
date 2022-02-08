#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    int j=0;
    char a[50],b;
    printf("Enter a sentence -> ");
    scanf("%s",&a);
    while (a[j]){
        b=a[j];
        putchar(tolower(b));
        j++;
    }
}
