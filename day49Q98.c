#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, last_space = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // safer than gets
    name[strcspn(name, "\n")] = '\0'; // remove newline if present

    len = strlen(name);

    // Find the position of the last space (before surname)
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            last_space = i;
    }

    printf("Result: ");

    // Print initials for all words before the last space
    for (i = 0; i < len; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c.", toupper(name[i]));
        if (name[i] == ' ' && i < last_space && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }

    // Print surname (last name) in full
    if (last_space != -1)
        printf(" %s", &name[last_space + 1]);

    return 0;
}

