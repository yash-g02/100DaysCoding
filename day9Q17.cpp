#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;  // discriminant

    if (d > 0)
        printf("Real and distinct roots\n");
    else if (d == 0)
        printf("Real and equal roots\n");
    else
        printf("Complex roots\n");

    return 0;
}

