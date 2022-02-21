#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file = fopen("writingBinary.bin", "wb");
    if (file == NULL)
    {
        printf("Error accessing file!!!!");
        exit(1);
    }
    char textToWrite[20];
    printf("Enter a string to write : ");
    gets(textToWrite);
    fwrite(&textToWrite, sizeof(textToWrite), 1, file);
    printf("Written the data into the file.");
    fclose(file);
    return (0);
}