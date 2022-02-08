#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    printf("Enter a character -> "); scanf("%c",&a);
    if (isupper(a)){
        a=tolower(a);
    } printf("\n");
    switch (a){
        case 'a': printf("Is vowel"); break;
        case 'e': printf("Is vowel"); break;
        case 'i': printf("Is vowel"); break;
        case 'o': printf("Is vowel"); break;
        case 'u': printf("Is vowel"); break;
        default: printf("Is consonant"); break;
    }
    return 0;
}
