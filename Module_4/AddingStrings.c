// adding two strings or concatination using strcat()
#include <stdio.h>
#include <string.h>
int main()
{
  char i[20], j[20];
  printf("Enter a string : ");
  gets(i);
  printf("String 1 ");
  puts(i);
  printf("Enter a string : ");
  gets(j);
  printf("String 2 ");
  puts(j);
  strcat(i, j);
  printf("Concated string : ");
  puts(i);
}
