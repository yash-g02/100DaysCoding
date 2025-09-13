#include <stdio.h>

int main() {
    int n, i, prod = 1;
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
        prod *= i;

    printf("%d\n", prod);
    return 0;
}

