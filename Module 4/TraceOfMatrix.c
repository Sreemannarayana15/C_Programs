#include <stdio.h>
// Find the trace of a given square matrix of order (m X m).
int main()
{
    int a[10][10], row, col, i, j, sum = 0;
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
    printf("Trace is : \n") for (i = 0; i < row; i++)
    {
        sum = sum + a[i][i]; // logic
        printf("%d\n", sum);
    }
}
