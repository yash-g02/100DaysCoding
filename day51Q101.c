#include <stdio.h>

int main() {
    int n, target, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    if (first == -1)
        printf("Target not found: -1, -1\n");
    else {
        printf("First occurrence: %d (index %d)\n", nums[first], first);
        printf("Last occurrence: %d (index %d)\n", nums[last], last);
    }

    return 0;
}

