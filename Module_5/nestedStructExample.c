#include <stdio.h>
#include <stdlib.h>
struct one
{
    int num;
};
struct two
{
    struct one ek;
    float num2;
};
int main(void)
{
    struct two a;
    a.num2 = 12.34;
    a.ek.num = 12;
    printf("Float wala : %.2f \nAur integer wala : %d", a.num2, a.ek.num);
    return 0;
}