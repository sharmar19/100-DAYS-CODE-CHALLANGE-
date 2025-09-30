/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int a[50][50], b[50][50], c[50][50], m, n, p, q, k, i, j;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n!=p) {
        printf("Matrix multiplication not possible.\n");
        printf("Columns of the first matrix must be equal to rows of the second matrix.\n");
        return 0;
    }

    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element %d and %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Enter element %d and %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nThe product of the two matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}