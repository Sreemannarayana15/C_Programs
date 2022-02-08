#include <stdio.h>
int main(){
    int i,n1=0,n2=1,n3=n1+n2;
    printf("0 1 ");
    for (i=2;i<100;i++){
        if (n3<100){
            printf("%d ",n3);
        }
        else{
            break;
        }
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
}
