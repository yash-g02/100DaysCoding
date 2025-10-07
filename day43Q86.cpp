#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    gets(str); // for practice; use fgets() in real code

    // Step 1: Find the length
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Step 2: Compare characters from start and end
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;  // not palindrome
            break;
        }
    }

    // Step 3: Print result
    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

