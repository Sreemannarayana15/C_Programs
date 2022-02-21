#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    float marks[5];
    int roll;
};
int main()
{
    struct student stuarr[10]; // Array of 10 students
    FILE *file;
    file = fopen("Q3.bin","wb");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details of Student %d\n", i);
        printf("Name : ");
        scanf("%s", stuarr[i].name);
        printf("Roll Number : ");
        scanf("%d", &stuarr[i].roll);
        printf("Marks of five subjects (with spaces) : ");
        scanf("%f %f %f %f %f", &stuarr[i].marks[0], &stuarr[i].marks[1], &stuarr[i].marks[2], &stuarr[i].marks[3], &stuarr[i].marks[4]);
        fwrite(&stuarr[i], sizeof(struct student), 1, file);
    }
    printf("Written data into file.");
    fclose(file);
}