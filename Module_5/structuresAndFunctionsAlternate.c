#include <stdio.h>
typedef struct sample
{
    int num1, num2;
} sam;
int addMembers(int num1, int num2)  // function declaration with sam (structure) as argument.
{
    static int sum = 0;
    sum = num1 + num2;    // members of struct sample
    return sum;
}
int main(void)
{
    struct sample aSample;
    aSample.num1 = 12;  // You can take this dynamically too
    aSample.num2 = 14; // You can take this dynamically too
    int k = addMembers(aSample.num1, aSample.num2);    // function call 
    printf("Sum of members of the structure is %d", k);
    return 0;
}