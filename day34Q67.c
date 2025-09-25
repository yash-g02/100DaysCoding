#include <stdio.h>

int main() {
    int arr[100], n, pos, val;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &val);

    // shift elements
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

