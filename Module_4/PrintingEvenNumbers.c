#include <stdio.h>
#include <string.h>
int main()
{
    char string[50], ele;
    int n, i, count = 0;
    printf("Enter the range : ");
    scanf("%d", &n);
    printf("Enter the characters (without spaces) : "); // spaces are counted in character array
    // storing of characters
    for (i = 0; i <= n; i++)
    {
        scanf("%s", &string[i]);
    }
    // checking occurences
    printf("Enter the character to search : ");
    scanf("%s", &ele); //
    for (i = 0; i <= n; i++)
    {
        if (string[i] == ele)
        {
            count = count + 1;
        }
    }
    printf("\nOccurence of %c in string is %d", ele, count);
}
