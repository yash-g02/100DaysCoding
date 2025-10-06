#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i; // declare variable outside the loop

    printf("Enter a string: ");
    gets(str); // (unsafe, but fine for basic practice)

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for easy comparison
        if (ch >= 'a' && ch <= 'z') { // check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

