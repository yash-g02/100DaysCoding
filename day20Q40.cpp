#include <stdio.h>

int main() {
    char bin[50];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", bin);

    for (i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else
            bin[i] = '0';
    }

    printf("1's Complement = %s", bin);
    return 0;
}

