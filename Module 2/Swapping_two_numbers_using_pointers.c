#include <stdio.h>
int main(){
    int a, b, *p1=&a, *p2=&b;
    printf("Enter two numbers a, b here :- ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping %d %d",*p1,*p2);
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("\nNumbers after swapping %d %d", *p1, *p2);
}
