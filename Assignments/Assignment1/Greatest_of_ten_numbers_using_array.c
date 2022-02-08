#include <stdio.h>
int main(){
    int a[10],temp=0,i=0;
    printf("Enter numbers \n");
    for (i=0;i<10;i++){
        printf("-> (%d) ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<=10;i++){
        if (a[i]>=temp)
            temp = a[i];
    }
    printf("Greatest of all the inputs is %d", temp);
}
