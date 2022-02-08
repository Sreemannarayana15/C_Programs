#include <stdio.h>
int main(){
    char opt;
    printf("Enter operation (+,-,*,/,m) : "); scanf("%c",&opt);
    int n1,n2;
    printf("Enter two numbers : "); scanf("%d %d",&n1,&n2);
    switch(opt){
    case '+': printf("Sum of n1 and n2 is %d",n1+n2); break;
    case '-': printf("Difference of n1 and n2 is %d",n1-n2); break;
    case '*': printf("Product of n1 and n2 is %d",n1*n2); break;
    case '/': printf("Quotient of n1 and n2 is %d", n1/n2); break;
    case 'm': printf("Remainder of n1 and n2 is %d",n1%n2); break;
    default: printf("Enter valid operator");
    }
}
