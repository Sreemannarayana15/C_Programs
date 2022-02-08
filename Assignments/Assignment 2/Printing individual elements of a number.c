#include <stdio.h>
int main(){
    int n, j=0;
    printf("Enter a number : "); scanf("%d",&n);
    while(n!=0){
        j=n%10;
        printf("%d\n",j);
        n=n/10;
    }
}
