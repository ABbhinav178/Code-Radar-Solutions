#include <stdio.h>

int main() {
    char ch;

    // Input character

    scanf("%c", &ch);

    // Check character type using switch
    switch (ch) {
        // Check for vowels
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vowel\n");
            break;

        // Check consonants
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                printf("Consonant\n");
            } 
            else if (ch >= '0' && ch <= '9') {
                printf("Digit\n");
            } 
            else {
                printf("Special Character\n");
            }
            break;
    }

    return 0;
}