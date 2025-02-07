#include <stdio.h>

int main() {
    char ch;

    // Input character

    scanf("%c", &ch);

    // Check if it's an alphabet character
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Switch to check vowels
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("Vowel\n");
                break;
            default:
                printf("Consonant\n");
                break;
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}