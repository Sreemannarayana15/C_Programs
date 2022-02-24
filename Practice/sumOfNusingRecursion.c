#include <stdio.h>
int sum(int num)  // FIXME: bro fix this.
{
    int res = 0;
    if (num == 1)
    {
        return 1;
    }
    else
    {
        res = (num + sum(num - 1));
    }
    return res;
}
int main()
{
    int range;
    printf("Enter number : ");
    scanf("%d", &range);
    int k = sum(range);
    printf("%d", sum);
}