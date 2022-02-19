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
    printf("Enter Roll Number", &s1.number);
    printf("Enter marks : ", &s1.marks);
    printf("Details of student : \nName : %s \nRoll Number : %d \nMarks : %.2f", s1.name, s1.number, s1.marks);
    return 0;
}