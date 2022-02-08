#include <stdio.h>
int fibo(int r){
    int n1=0,n2=2;
    if (r!=0){
        return (fibo(r-1)+fibo(r-2));
        r--;
    }
    else{
        return 1;
    }
}
int main(){
    int r=fibo(10);
    printf("%d ",r);
}
