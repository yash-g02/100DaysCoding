#include <stdio.h>

int main(void) {
    int arr[100];
    int n, pos, i;

    printf("Enter size of array (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter position to delete (1 to %d): ", n);
    if (scanf("%d", &pos) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (pos < 1 || pos > n) {
        printf("Position out of range.\n");
        return 1;
    }

    // shift left from the position-1 index
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // new size

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

