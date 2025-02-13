
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int is_vowel = 0;
    for (int i = 0; i < 10; i++) {
        if (ch == vowels[i]) {
            is_vowel = 1;
            break;
        }
    }
    return is_vowel;
}

void checkCharacter(char ch) {
    if (isalpha(ch)) {
        if (isVowel(ch)) {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    scanf("%c", &ch);
    checkCharacter(ch);
    return 0;
}