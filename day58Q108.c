#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    long long totalProduct = 1;
    int zeroCount = 0;

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] == 0)
            zeroCount++;
        else
            totalProduct *= nums[i];
    }

    for (i = 0; i < n; i++) {
        if (zeroCount > 1)
            answer[i] = 0;
        else if (zeroCount == 1) {
            if (nums[i] == 0)


