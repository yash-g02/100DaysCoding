#include <stdio.h>
#define MAX 100

int main(void) {
    int n;
    int i, j, isSym = 1;
    int mat[MAX][MAX];

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSym = 0;
                break;  // no need to check further
            }
        }
        if (!isSym) break;
    }

    // Print result
    if (isSym)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is NOT Symmetric.\n");

    return 0;
}

