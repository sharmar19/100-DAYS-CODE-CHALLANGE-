/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int matrix[50][50], i, j, distinct=1, m, n;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &n);

    if (m != n) {
        printf("This check is for a square matrix. Please run again with equal rows and columns.\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = i + 1; j < m; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0) {
            break;
        }
    }

    if (distinct == 1) {
        printf("The elements on the main diagonal are distinct.\n");
    } 
    else {
        printf("The elements on the main diagonal are not distinct.\n");
    }

    return 0;
}