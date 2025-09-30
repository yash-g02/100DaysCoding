#include <stdio.h>
#define MAX 100

int main(void) {
    int m, n;
    int i, j;
    int A[MAX][MAX], B[MAX][MAX], Sum[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result
    printf("\nResultant Matrix after Addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

