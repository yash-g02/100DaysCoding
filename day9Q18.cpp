#include <stdio.h>

int main() {
    int marks;
    printf("Enter percentage: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        printf("Grade: A\n");
    else if (marks >= 80)
        printf("Grade: B\n");
    else if (marks >= 70)
        printf("Grade: C\n");
    else if (marks >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}

