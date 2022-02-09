#include <stdio.h>
int count(int a)
{
    static int k = 0; // k for storing the count
    while (a != 0)
    {
        k++; // incrementing for count
        a /= 10;
    }
    return k;
}
int main(void)
{
    int anum;
    printf("Enter a number : ");
    scanf("%d", &anum);
    printf("Number of digits = %d", count(anum));
}