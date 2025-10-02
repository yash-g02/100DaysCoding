#include <stdio.h>
#define MAX 100

int main(void) {
    int m, n;
    int i, j;
    int mat[MAX][MAX];

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // Loop over all possible sums of indices (i + j)
    for (int s = 0; s <= m + n - 2; s++) {
        for (i = 0; i < m; i++) {
            j = s - i;
            if (j >= 0 && j < n) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

