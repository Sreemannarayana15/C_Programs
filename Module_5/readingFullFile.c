#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f; // file pointer
    char c;
    f = fopen("C:/Users/LENOVO/Desktop/Computer Science/sample.txt", "r"); // opening file for opening
    while (1)
    {
        c = fgetc(f);
        if (c == EOF)
        {
            break;
        }
        printf("%c", c);
    }
    fclose(f);
    return 0;
}