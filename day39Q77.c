#include <stdio.h>
#define MAX 100

int main(void) {
    int m, n;
    int i, j, k, isDistinct = 1;
    int mat[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for (i = 0; i < m && i < n; i++) {          // only diagonal elements
        for (k = i + 1; k < m && k < n; k++) {  // compare with next diagonals
            if (mat[i][i] == mat[k][k]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    if (isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}

