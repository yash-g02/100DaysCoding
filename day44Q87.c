#include <stdio.h>

int main() {
    char str[200];
    int i;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str); // for practice only (use fgets in modern compilers)

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // do nothing for alphabets
        }
        else {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}

