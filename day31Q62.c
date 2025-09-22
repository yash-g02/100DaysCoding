#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Reversing in place
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

