#include <stdio.h>
// To find product of two matrices
int main()
{
    int a[10][10], b[10][10], c[10][10], row, col, i, j;
    printf("Enter order of matrix : ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of matrix a.\n");
    for (i = 0; i < row; i++)
    {
        printf("Enter row : ");
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix b.\n");
    for (i = 0; i < row; i++)
    {
        printf("Enter row : ");
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("result : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%2d", c[i][j]);
        }
        printf("\n");
    }
}
