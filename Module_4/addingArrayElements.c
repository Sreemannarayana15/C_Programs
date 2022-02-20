// sum of elements in an array.
#include <stdio.h>
int main()
{
    int k[50]; // initialising an array
    int n, i, sum = 0;
    printf("Enter the size of elements you want to insert : ");
    scanf("%d", &n);
    // loop for inserting in runtime
    printf("\nEnter elements : \n");
    for (i = 0; i < n; i++)
    {
        // storing of array elements
        scanf("%d", &k[i]);
    }
    // now to see the array
    printf("\nArray : ");
    for (i = 0; i < n; i++)
    {
        // for displaying array elements
        printf("%d ", k[i]);
    }
    printf("\n\nSum = ");
    // for Sum
    for (i = 0; i < n; i++)
    {
        // sum = sum + k[i];
        sum += k[i]; // same thing
    }
    printf("%d", sum);
}
