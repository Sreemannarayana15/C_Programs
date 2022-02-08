#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers to compare :- ");
    scanf("%d %d",&a,&b);
    (a>b) ? printf("a is greater than b") : printf("b is greater than a");
}
