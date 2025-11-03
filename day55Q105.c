#include <stdio.h>

int main() {
    int n, i, j, count, majority = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int half = n / 2;  // majority condition: > half

    // Check frequency of each element
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count > half) {
            majority = nums[i];
            break;  // found the majority, stop early
        }
    }

    printf("Majority element: %d\n", majority);

    return 0;
}

