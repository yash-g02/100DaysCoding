#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;

    
    num = num - first * (int)(10, digits) - last;
    num = num + last * (int)(10, digits) + first;

    printf("After swapping = %d", num);
    return 0;
}

