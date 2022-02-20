// using strcpy()
#include <stdio.h>
#include <string.h>
int main()
{
  char a[10], b[10];
  printf("Enter a string : ");
  gets(a);
  printf("String 1 is ");
  puts(a);
  printf("Enter a string : ");
  gets(b);
  printf("String 2 is ");
  puts(b);
  strcpy(a, b);
  printf("\nAfter Copying\n");
  printf("String 1 is ");
  puts(a);
  printf("String 2 is ");
  puts(b);
}
