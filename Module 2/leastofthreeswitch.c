#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers a, b, c here -> ");
    scanf("%d %d %d",&a,&b,&c);
    switch(a>b){
    case 1:
        switch(a>c){
        case 1:
            printf("a is greater than b and c");
            break;
        case 0:
            printf("c is greater than a and b");
            break;
        }
        break;
    case 0:
        switch(b>c){
        case 1:
            printf("b is greater than a and c");
            break;
        case 0:
            switch(a==b || b==c || c==a){
            case 1:
                printf("Two numbers maybe equal.");
                break;
            }
            break;
        }
        break;
    }
}
