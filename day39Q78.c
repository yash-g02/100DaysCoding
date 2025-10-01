#include <stdio.h>
#define MAX 100

int main(void) {
    int n;
    int i, j, sum = 0;
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

    // Sum main diagonal
    for (i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    // Print result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

