#include <stdio.h>
struct book
{
    char title[50], aname[30];
    float price;
};
int main()
{
    int num;
    printf("Enter number of books you want : ");
    scanf("%d", &num);
    struct book books[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Details : \n");
        printf("Title : ");
        scanf("%s", books[i].title);
        printf("Author Name : ");
        scanf("%s", books[i].aname);
        printf("Price : ");
        scanf("%f", &books[i].price);
    }
    // comparing price
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        if (books[i].price > 500)
        {
            printf("Title : %s", books[i].title);
            printf("\nAuthor name : %s\n", books[i].aname);
        }
    }
}