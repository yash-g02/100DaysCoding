#include <stdio.h>
#define MAX 100

int main(void) {
    int m, n;
    int i, j;
    int mat[MAX][MAX], trans[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Print transpose
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

