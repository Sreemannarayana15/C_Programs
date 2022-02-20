#include <stdio.h>
// Transpose of a matrix
int main()
{
    int row, col, i, j, arr1[10][10], arr2[10][10];
    printf("Enter the size of matrix : ");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        printf("Enter row %d (%d elements) : ", i + 1, col);
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]); // storing
        }
    }
    // values are stored.
    // tronspose of matrix
    // for (i=0;i<row;i++)
    // {
    //     for (j=0;j<col;j++)
    //     {
    //         arr2[j][i]=arr1[i][j];  // logic of this program
    //     }
    // }
    // printing arr arr2
    printf("\nThe transpose matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
}
