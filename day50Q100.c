#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    gets(str);  // (Note: use fgets() in modern C instead of gets())

    len = strlen(str);

    printf("\nAll substrings of \"%s\" are:\n", str);

    // Loop to generate substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print characters from index i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

