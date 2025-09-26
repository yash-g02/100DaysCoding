#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (no. of rotations): ");
    scanf("%d", &k);

    k = k % n; // to avoid extra rotations

    // Temporary array
    int temp[100];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy back
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

