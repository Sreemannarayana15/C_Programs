#include <stdio.h>
#include <math.h>
int main(){
    int i,j,sum,temp,num;
    printf("Enter number -> ");
    scanf("%d",&num);
    temp=num;
    while(temp>=1){
        i=temp%10;
        j=i*i*i;
        sum+=j;
        temp=temp/10;
    }
    if (sum==num){
        printf("Number %d is armstrong.",num);
    }
    else{
        printf("Number %d is not armstrong",num);
    }
}
