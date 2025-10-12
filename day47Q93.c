#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1); // use fgets in modern programs

    printf("Enter second string: ");
    gets(str2);

    // Count frequency of lowercase letters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
        else if (str1[i] >= 'A' &

