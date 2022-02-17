#include <stdio.h>
#include <string.h>
int main(){
    FILE *f;
    f = fopen("C:/Users/LENOVO/Desktop/Computer Science/sample.txt", "w");
    char name[30], gender[6];
    int phone, age;
    printf("Enter name : "); scanf("%s",name);
    printf("Enter age : "); scanf("%d",&age);
    printf("Enter gender : "); scanf("%s",gender);
    printf("Enter phone Number : "); scanf("%d",&phone);
    fprintf(f,"Details :\nName : %s\nAge : %d\nGender : %s\nContact : %d", name, age, gender ,phone);
    fclose(f);
    return 0;
}