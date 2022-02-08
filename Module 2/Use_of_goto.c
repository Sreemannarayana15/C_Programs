#include <stdio.h>
int main(){
    int s, a, b;
    printf("Enter number 1 - ");
    scanf("%d",&a);
    printf("Enter number 2 - ");
    scanf("%d",&b);
    printf("Enter a choice :- ");
    scanf("%d",&s);
    switch(s){
    addition:
    case 1: printf("Sum of two numbers = %d", a+b); break;
    subtraction:
    case 2: printf("Difference of two numbers = %d", a-b); break;
    multiplication:
    case 3: printf("Product of two numbers = %d", a*b); break;
    division:
    case 4: printf(" Quotient of two numbers = %d", a/b); break;
    default: goto addition; break;
    }
}
