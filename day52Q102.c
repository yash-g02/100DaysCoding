#include <stdio.h>

int main() {
    int n, x, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ceilIndex = -1;
    int mid;

    // Binary search for ceil
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == x) {
            ceilIndex = mid;  // exact match = ceil
            break;
        } 
        else if (arr[mid] < x) {
            low = mid + 1;    // move right
        } 
        else {
            ceilIndex = mid;  // possible ceil
            high = mid - 1;   // look for smaller possible ceil
        }
    }

    if (ceilIndex == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);

    return 0;
}

