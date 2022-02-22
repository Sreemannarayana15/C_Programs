#include <stdio.h>
struct Emp
{
    char name[30];
    int emid, jyear;
    float salary;
};
int main()
{
    int num;
    printf("Enter number of employees : ");
    scanf("%d", &num);
    struct Emp employees[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Details : \n");
        printf("Employee ID : ");
        scanf("%d", &employees[i].emid);
        printf("Name : ");
        scanf("%s", employees[i].name);
        printf("joining Year : ");
        scanf("%d", &employees[i].jyear);
        printf("Salary : ");
        scanf("%f", &employees[i].salary);
    }
    // comparing serivice year
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        if (2022 - employees[i].jyear > 10)
        {
            float bonus;
            printf("Enter bonus of %s\n", employees[i].name);
            scanf("%f", &bonus);
            employees[i].salary += bonus;
            printf("Details\nName %s\nID %d\nSalary %.2f\nJoining Year %d\n", employees[i].name, employees[i].emid, employees[i].salary, employees[i].jyear);
        }
    }
}