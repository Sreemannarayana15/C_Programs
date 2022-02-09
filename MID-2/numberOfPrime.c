#include <stdio.h>
int cprime(int k)
{
    static int parr[4] = {2, 3, 5, 7}, res, tarr[20], i;
    while (k != 0)
    {
        tarr[i] = k % 10;
        k /= 10;
        i++;
    }
    for (int a = 0; a < 4; a++)
    {
        for (int j=0; j<i;j++){   
            if (tarr[j]==parr[a])
            {
                res += 1;
            }
        }
    }
    return res;
}
int main(void)
{
    int anum;
    printf("Enter a number : ");
    scanf("%d", &anum);
    printf("Number of prime digits = %d", cprime(anum));
}