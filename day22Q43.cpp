#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}

