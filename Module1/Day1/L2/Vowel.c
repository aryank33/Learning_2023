#include <stdio.h>

int findVowel(char ch) {
    int result;
    
    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            result = 1;  // Vowel
            break;
        default:
            result = 0;  // Not a vowel
            break;
    }
    
    return result;
}

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    int result = findVowel(ch);
    
    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
