#include <stdio.h>
#include <string.h>
union auni
{
    char name[30];
    int num;
};
int main()
{
    union auni u1;
    u1.num=123;
    strcpy(u1.name, "Bharat");
    printf("%s is name.", u1.name);
}