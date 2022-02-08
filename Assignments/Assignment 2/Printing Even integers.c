#include <stdio.h>
int main(){
    int r; printf("Enter range (0-?) : "); scanf("%d",&r);
    for (int j=0; j<=r; j++){
        if (j%2==0){
            printf("%d ",j);
        }
    }
}
