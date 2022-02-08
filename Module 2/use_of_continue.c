#include <stdio.h>
int main(){
    int j=10,i=10,k;
    scanf("%d",&k);
    for (i=k;i<20;i++){
        if (i>14){
            printf("%d ",i);
            continue;
        }
    }
    printf("\n\n");
    /*Above for loop with continue statement will give outputs from 6 to 9. Due to use of continue it is doing that.
    Below we can see the same without continue.*/
    for (j=k;j<20;j++){
        if (j>14){
            printf("%d ",j);
        }
    }
}
