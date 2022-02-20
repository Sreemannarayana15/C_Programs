// to find string length without using string handling functions
#include <stdio.h>
int main()
{
    char a[10], b[10];
    int i, length = 0;
    printf("enter a string\n");
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        length = length + 1;
    }
    printf("the length of the string is %d", length);
}
