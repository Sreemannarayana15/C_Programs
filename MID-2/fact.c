#include <stdio.h>
int fact(int a)
{ // factorial of a given number using recursion
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}
int facta(int a)
{ // facorial of a given number using normal function
    static int j, res = 1;
    for (j = 1; j <= a; j++)
    {
        res = res * j;
    }
    return res;
}
int main(void)
{
    int input;
    printf("Enter a number : ");
    scanf("%d", &input);
    int res = facta(input);
    printf("%d is the factorial of input value.", res);
    return 0;
}