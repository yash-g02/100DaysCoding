#include <stdio.h>

int main() {
    int arr[100], n;
    int first, second;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Need at least 2 elements.\n");
        return 0;
    }

    first = second = -2147483648;  // very small value

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element (all elements are equal).\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}

