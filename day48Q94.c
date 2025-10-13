#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, maxLen = 0, maxStart = 0, len;

    printf("Enter a sentence: ");
    gets(str); // for learning only; use fgets in real programs

    i = 0;
    while (1) {
        // Count length of current word
        len = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            len++;
            i++;
        }

        // Update longest word if current word is longer
        if (len > maxLen) {
            maxLen = len;
            maxStart = start;
        }

        if (str[i] == '\0')
            break;

        i++;          // skip space
        start = i;    // start index of next word
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", maxLen);

    return 0;
}

