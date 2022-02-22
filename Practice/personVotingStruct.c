#include <stdio.h>
struct Person
{
    char name[30];
    int byear;
};
int main()
{
    int num; printf("Number : "); scanf("%d", &num);
    struct Person per[num];
    for(int i=0; i<num; i++)
    {
        printf("Enter Details : \n");
        printf("Name : "); scanf("%s", per[i].name);
        printf("Birth year : "); scanf("%d", &per[i].byear);
    }
    printf("People eligible for voting are :\n");
    for(int i=0; i<num; i++)
    {
        if (2022-per[i].byear >= 18)
        {
            printf("%s\n", per[i].name);
        }
    }
    return (0);
}