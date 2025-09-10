#include <stdio.h>

int main() {
    float cp, sp, result;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        result = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", result);
    }
    else if (cp > sp) {
        result = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", result);
    }
    else {
        printf("No profit, no loss\n");
    }

    return 0;
}

