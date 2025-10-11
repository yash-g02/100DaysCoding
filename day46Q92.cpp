#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; // to store frequency of each lowercase letter
    int i;

    printf("Enter a string: ");
    gets(str); // for practice only; use fgets() in real programs

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {  // only consider lowercase letters
            freq[ch - 'a']++;  // increase frequency
            if (freq[ch - 'a'] == 2) {  // first time it repeats
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

