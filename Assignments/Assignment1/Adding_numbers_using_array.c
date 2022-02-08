#include <stdio.h>
int main(){
    int arr[50],i=0,n,sum=0;
    //here arr[50] means arr (name of array, it can be any name) and [50] is the size of array.
    printf("No. inputs you want to have -> ");
    scanf("%d",&n);
    //inputing values into array using loop and indexes.
    for (i=0;i<n;i++){
        printf("Enter value of element %d -> ",i);
        scanf("%d",&arr[i]);
    }
    printf("Sum of elements of array are : ");
    //This is to access the elements.
    for (i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}
