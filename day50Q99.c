#include <stdio.h>
#include <string.h>

int main() {
    char date[20] = "15/04/2025";
    char new_date[20] = "";

    // Copy day
    strncpy(new_date, date, 2);
    new_date[2] = '\0';

    // Add -Apr-
    strcat(new_date, "-Apr-");

    // Copy year part (from 7th char onward)
    strcat(new_date, date + 6);

    printf("Converted date: %s\n", new_date);
    return 0;
}

