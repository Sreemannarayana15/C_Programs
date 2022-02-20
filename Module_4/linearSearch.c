#include <stdio.h>
int main()
{
    int arr[10], size, search;
    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter elements to array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d", &search);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            printf("Value is at %d index.", i);
            break;
        }
    }
}