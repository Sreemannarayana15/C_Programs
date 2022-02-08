#include <stdio.h>
#include <string.h>
int main(){
    char a;
    printf("Enter a char to check weather it is a vowel or a consonant -> ");
    scanf("%s",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a== 'U'){
        printf("Entered character is vowel.");
    }
    else{
        printf("Entered character is consonant.");
    }
}
