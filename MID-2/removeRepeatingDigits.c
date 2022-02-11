#include <stdio.h>
int rem(int a)
{
    static int k=0, arr[20], i;
    while (a!=0)
    {
        k=a%10;
        arr[i]=k;
        a/=10;
    }
}