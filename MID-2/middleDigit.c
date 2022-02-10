#include <stdio.h>
int mid(int a)
{
    int i = 0, arr[20];
    while (a != 0)
    {
        arr[i] = a % 10;
        a = a / 10;
        i++;
    }
    if (i % 2 == 0)
    {
        printf("Middle of number is %d", arr[i / 2]);
    }
    else
    {
        printf("Middle of number is %d", arr[(i / 2) + 1 / 2]);
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    mid(num);
}