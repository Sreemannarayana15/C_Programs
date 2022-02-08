#include <stdio.h>
int main(){
    int num,i=1,sum=0;
    printf("Enter a number -> ");
    scanf("%d",&num);
    while (i<=num){
        sum+=(1/i);
        i++;
    }
    printf(" = 1/%d ",sum);
}
