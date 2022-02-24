#include <stdio.h>
int main()
{
    printf("Enter a number : ");
    int num;
    scanf("%d", &num);
    int arr[32], i = 0;
    while (num > 0)
    {
        arr[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    int ch;
    printf("\nEnter the nth number you want : ");
    scanf("%d", &ch);
    printf("%d (Output)", arr[i-ch-1]);
}