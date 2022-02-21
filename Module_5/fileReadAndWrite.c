#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct fam
{
    char name[20], gender[6];
    int age;
} member;
int main()
{
    member farr[5], farro[5]; // taking an array of five family members. Here farr means family array in short.
    FILE *file = NULL;
    file = fopen("readAndWrite.bin", "wb");
    if (file == NULL)
    {
        printf("Error loading file!!!");
        exit(1);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details (%d) : \n", i);
        printf("Name : ");
        scanf("%s", farr[i].name);
        printf("Age : ");
        scanf("%d", &farr[i].age);
        printf("Gender : ");
        scanf("%s", farr[i].gender);
        fwrite(&farr[i], sizeof(struct fam), 1, file);
    }
    fclose(file);
    FILE *fileout;
    fileout = fopen("readAndWrite.bin", "rb");
    for (int i = 0; i < 5; i++)
    {
        fread(&farro[i], sizeof(struct fam), 1, fileout);
        printf("Name of member %d is %s\n", i+1, farro[i].name);
    }
    fclose(fileout);
    return 0;
}