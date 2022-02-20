#include <stdio.h>
#include <string.h>
int main()
{
	char sarr[30];
	int len;
	printf("Enter string here : ");
	gets(sarr);
	printf("\nReversed string : \n");
	for (int i = strlen(sarr); i >= 0; i--)
	{
		printf("%c", sarr[i]);
	}
	return (0);
}
