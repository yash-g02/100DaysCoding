#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    double val = (n * (n + 1)) / 2.0;
    double x = sqrt(val);

    int pivot = (int)x;

    if (pivot * pivot == val)
        printf("Pivot integer: %d\n", pivot);
    else
        printf("-1\n");

    return 0;
}

