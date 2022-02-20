#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file; // fileVariable
    file = fopen("C:/Users/LENOVO/Desktop/Computer Science/Unit-1(basicsLinks).txt", "a"); // a for appending
    if (file == NULL)   // to cheack if file contains data.
    {
        printf("File Contains no data");
    }
    char text[1000];
    /*writing*/
    printf("Enter text : ");
    scanf("%s",text);
    fprintf(file, "\n%s", text);
    fclose(file);
    return (0);
}