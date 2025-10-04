#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    // loop until null character '\0'
    while (str[count] != '\0') {
        count++;
    }

    // fgets includes newline, so adjust if needed
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}

