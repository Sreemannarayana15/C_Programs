#include <stdio.h>
int main()
{
    int arr[10][10];
    int row, col, i, j;
    printf("Enter matrix order ( Upto 10X10 ) : ");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        printf("Enter row-%d (%d elements) : ", i + 1, col);
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Displaying the matrix
    printf("\nThe Matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
