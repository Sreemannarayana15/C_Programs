#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int i, j;
    printf("Enter two numbers : ");
    scanf("%d %d", &i, &j);
    int k = gcd(i, j);
    printf("GCD of %d and %d is %d", i, j, k);
}