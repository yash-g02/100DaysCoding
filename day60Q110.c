#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k");
        return 0;
    }

    // For each window
    for (i = 0; i <= n - k; i++) {
        int maxVal = arr[i];

        // Find max in current window
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }

        printf("%d ", maxVal);
    }

    return 0;
}

