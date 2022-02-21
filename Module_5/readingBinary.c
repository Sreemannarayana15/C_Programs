#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file = NULL;
    file = fopen("writingBinary.bin", "rb");
    if (file == NULL)
    {
        printf("Error accessing file!!!!");
        exit(1);
    }
    char textToAccess[20];
    fread(&textToAccess, sizeof(textToAccess), 1, file);
    printf("Text read from the file is : %s", textToAccess);
    fclose(file);
    return (0);
}