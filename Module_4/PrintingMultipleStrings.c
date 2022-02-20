#include <stdio.h>
#include <ctype.h>
int main()
{
  char a[20][20];
  int i, n; // size of array
  printf("Enter size of string : \n");
  scanf("%d", &n);
  printf("Enter the string values : ");
  for (i = 0; i < n; i++)
  {
    scanf("%s", a[i]);
  }
  printf("\nEntered strings are : ");
  for (i = 0; i < n; i++) // printing the string values
  {
    printf("%s\n", a[i]);
  }
}
