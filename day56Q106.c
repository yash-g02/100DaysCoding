#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");

    for (i = 0; i < n; i++) {
        int nextGreater = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // first greater element on the right
            }
        }

        printf("%d", nextGreater);

        if (i != n - 1)
            printf(","); // comma-separated
    }

    printf("\n");
    return 0;
}

