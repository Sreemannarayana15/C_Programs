#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;    // file pointer
    f = fopen("C:/Users/LENOVO/Desktop/Computer Science/sample.txt", "r");  // opening file for reading
    char text[1024]; // to store the data we read
    fscanf(f, "%s", text);  // storing the data from the file into text[1024] character array.
    printf("Line is : %s", text);   // printing the data we got.
    fclose(f);
    return 0;
}
