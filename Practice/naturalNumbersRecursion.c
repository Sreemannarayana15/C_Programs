#include <stdio.h>
int nat(int start, int end)
{
    if (start <= end)
    {
        printf("%d ", start);
        nat(start + 1, end);
    }
}
int main(void)
{
    int s, e;
    printf("Enter start and end : ");
    scanf("%d %d", &s, &e);
    printf("Numbers :\n");
    nat(s, e);
    return (0);
}