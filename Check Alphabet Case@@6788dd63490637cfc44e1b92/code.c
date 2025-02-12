#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    // if('A'>ch && ch<'Z'){
    //     printf("Uppercase");
    // }else{
    //     printf("Lowercase");
    // }
    (ch > 'A' && ch < 'Z')?printf("Uppercase"):(ch > 'a' && ch < 'z')?printf("Lowercase"):printf("Not an alphabet");
    return 0;
}