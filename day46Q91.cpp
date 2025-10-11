#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str); // for practice only (use fgets in modern programs)

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is NOT a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j] = str[i];  // keep the character
            j++;
        }
    }
    str[j] = '\0';  // terminate the string

    printf("String after removing vowels: %s\n", str);

    return 0;
}

