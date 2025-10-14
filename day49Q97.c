#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;  // declare here instead of inside the for loop

    printf("Enter your full name: ");
    gets(name);  // use fgets for safety in modern code

    printf("Initials: ");
    for (i = 0; i < strlen(name); i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c.", toupper(name[i]));
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }

    return 0;
}

