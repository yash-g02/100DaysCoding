#include <stdio.h>

int main() {
    int a, b, x, y, hcf, lcm;
    scanf("%d %d", &a, &b);

    x = a; y = b;
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    lcm = (a * b) / hcf;

    printf("%d\n", lcm);
    return 0;
}

