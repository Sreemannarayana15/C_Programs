#include <stdio.h>
int main(){
    int i,j,k;
    printf("Enter the 1.Start 2.End :- ");
    scanf("%d %d",&k,&j);
    for (i=k;i<=j;i+=2)
        printf("%d ",i);
    printf("\n");
    for (i=k+1;i<=j;i+=2)
        printf("%d ",i);
}

