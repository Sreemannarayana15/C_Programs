// string handling functions
// 1. strlen():- it finds the length of the string
// 2. strcmp():- it compares two given strings
// 3. strcpy():- it copies from one string to another
// 4. strcat():- to add second string at the end of the first string
// 5. strrev():- it reverses the string
// 6. strupr():- it converts given lowercase string to uppercase
// 7. strlwr():- it converts given uppercase string to lowercase
#include <stdio.h>
#include <string.h>
// to find the length of a string
int main()
{
  char a[10];
  int b;
  printf("Enter a string : ");
  scanf("%s", a);
  len = strlen(a);
  printf("Length of string is %d", len);
  return 0;
}
