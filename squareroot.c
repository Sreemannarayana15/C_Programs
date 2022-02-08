#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float res;
    printf("Enter a number -> ");
    scanf("%d",&n);
    res=pow(n,0.5);
    printf("Square root of %d is %.2f",n,res);
}
