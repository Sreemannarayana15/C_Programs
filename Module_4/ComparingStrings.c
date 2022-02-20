// using strcmp()
#include <stdio.h>
int main()
{
    char a[10], b[10];
    int c;
    printf("Enter a string : ");
    gets(a);
    printf("Enter a string : ");
    gets(b);
    printf("\nStrings are : \n");
    puts(a);
    puts(b);
    c = strcmp(a, b);
    if (c == 0)
    {
        printf("\nStrings are equal");
    }
    else
    {
        printf("\nStrings are not equal");
    }
}
