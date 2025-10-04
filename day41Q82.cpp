#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // print each character on a new line
    while (str[i] != '\0') {
        // skip newline char if fgets captures it
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}

