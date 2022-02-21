#include <stdio.h>
int main(){
    int i,j,k=0,l,m=0,n;
    for (i=5;i>0;i--){
        for (j=i;j>0;j--){
            printf("  ");
        }
        for (l=0;l<=k;l++){
            printf("* ");
        }
        for (n=0;n<m;n++){
            printf("* ");
        }
        m++;
        k++;
        printf("\n");
    }
    /*Pyramid is done now */
    printf(" ");
    int a,b,c=5,d,e=2,f;
    for (a=0;a<5;a++){
        for (b=0;b<a;b++){
            printf("  ");
        }
        for (d=c;d>=0;d--){
            printf("* ");
        }
        for (f=e;f>0;f--){
            printf("* ");
        }
        printf("\n");
    }
}
