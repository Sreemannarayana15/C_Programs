#include <stdio.h>
struct details
{
    char name[20];
    float salary;
    int age;
};
struct employee
{
    struct details det;
    int _id;
};
int main()
{
    int num;
    FILE *file;
    file = fopen("Q4.txt","a+");
    printf("How many employee data do you want to enter? "); scanf("%d", &num);
    struct employee arr[num];
    printf("Enter details\n");
    for (int i=0; i<num; i++)
    {
        printf("\n_id : %d\n", i+1);
        arr[i]._id=i+1;
        printf("Name : "); scanf("%s",arr[i].det.name);
        printf("Salary : "); scanf("%f", &arr[i].det.salary);
        printf("Age : "); scanf("%d", &arr[i].det.age);
        fprintf(file, "\nID : %d\tName : %s\tAge : %d\tSalary : %.2f", arr[i]._id, arr[i].det.name, arr[i].det.age, arr[i].det.salary);
    }
}