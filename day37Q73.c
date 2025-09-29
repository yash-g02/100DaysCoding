#include <stdio.h>
#define MAXR 100
#define MAXC 100

int main(void) {
    int m, n;
    int i, j;   // ? declare here (not inside loop)
    int mat[MAXR][MAXC];
    int rowSum[MAXR];

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        rowSum[i] = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }

    for (i = 0; i < m; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }
    return 0;
}

