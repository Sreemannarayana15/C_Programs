#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter four numbers - "); scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d){
        printf("%d is greater than %d, %d and %d",a,b,c,d);
    }
    else if (b>a && b>c && b>d){
        printf("%d is greater than %d, %d and %d",b,a,c,d);
    }
    else if (c>a && c>b && c>d){
        printf("%d is greater than %d, %d and %d",c,a,b,d);
    }
    else{
        printf("%d is greater than %d, %d and %d",d,a,b,c);
    }
}
