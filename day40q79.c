/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int matrix[10][10], m, n, i, j, s;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix is:\n");

    int diagonals=m+n-1;

    for (s = 0; s < diagonals; s++) {
        for (i = 0; i < m; i++) {
            j = s - i;
            if (j >= 0 && j < n) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    
    printf("\n");

    return 0;
}