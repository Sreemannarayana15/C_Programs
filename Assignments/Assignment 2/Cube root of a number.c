#include <stdio.h>
#include <math.h>
int main(){
    int n; printf("Enter a number to get its cube root : "); scanf("%d",&n);
    float res = pow(n,0.333333);
    printf("Cube root of the number is : %.2f", res);
}
