#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0)
            printf("Zero");
        else
            printf("Positive");
    } else {
        printf("Negative");
    }
    return 0;
}

