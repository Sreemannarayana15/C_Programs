#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int number;
    float marks;
};
int main(void)
{
    struct student s1;
    printf("Enter name : ");
    scanf("%s", s1.name);
    printf("Enter Roll Number : "); scanf("%d", &s1.number);
    printf("Enter marks : "); scanf("%f", &s1.marks);
    printf("\nDetails of student : \nName : %s \nRoll Number : %d \nMarks : %.2f", s1.name, s1.number, s1.marks);
    return 0;
}