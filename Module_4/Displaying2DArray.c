// To display elements of 2D array
#include <stdio.h>
int main()
{
    int D2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Type 1
    int i, j;
    for (i = 0; i < 3; i++) // for rows
    {
        for (j = 0; j < 3; j++) // for columns
        {
            printf("%d ", D2[i][j]);
        } // End of inner loop
        printf("\n");
    } // End of outer loop
} // End of main