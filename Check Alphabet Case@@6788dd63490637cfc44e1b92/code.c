#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch >='A' && ch<='Z'){
        printf("Uppercase");
    }else if (ch>='a'&& ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    // (ch >= 'A' && ch <= 'Z')?printf("Uppercase"):(ch >= 'a' && ch <= 'z')?printf("Lowercase"):printf("Not an alphabet");
    return 0;
}