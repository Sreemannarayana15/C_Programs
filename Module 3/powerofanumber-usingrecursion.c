#include <stdio.h>
int main() {
    int b, a, res;
    printf("Enter number: ");
    scanf("%d", &b);
    printf("Enter power : ");
    scanf("%d", &a);
    res = power(b, a);
    printf("%d^%d = %d", b, a, res);
    return 0;
}

int power(int b, int a){
    if (a!=0)
        return b*power(b,a-1);
    else
        return 1;
}
