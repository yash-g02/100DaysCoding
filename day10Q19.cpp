#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c)
        printf("Equilateral\n");
    else if (a==b || b==c || a==c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");

    return 0;
}

