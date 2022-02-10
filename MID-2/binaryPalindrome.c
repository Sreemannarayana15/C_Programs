#include <stdio.h>
int bin(int a)
{
    static int arr[20], i = 0, k = 0, l = 0, res = 0, temp = 0, j;
    temp = a;
    while (a != 0)
    {
        k = a % 2;
        arr[i] = k;
        a = a / 2;
        i++;
    }
    for (j = i - 1, l = 0; l < j; l++, j--)
    {
        if (arr[j] == arr[l])
        {
            res = 1;
        }
        else
        {
            res = 0;
            break;
        }
    }
    if (res == 1)
    {
        printf("Binary representation of %d is palindrome.", temp);
    }
    else
    {
        printf("Binary representation of %d is not a palindrome.", temp);
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    bin(n);
}