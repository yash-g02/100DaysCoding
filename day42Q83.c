#include <stdio.h>

int main() {
    char str[100];
    int i; // declare outside loop for compatibility

    printf("Enter a lowercase string: ");
    gets(str); // for practice; use fgets() in real programs

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase manually
        }
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}

