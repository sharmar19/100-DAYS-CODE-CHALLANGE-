/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int a[10][10], i, j, m, n, symmetric=1;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &n);

    if (m!=n) {
        printf("The matrix is not symmetric because it is not a square matrix.\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i =0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if(a[i][j]!=a[j][i]){
                symmetric=0;
                break;
            }
        }
        if(isymmetric==0){
            break;
        }
    }

    if(symmetric==1){
        printf("The matrix is symmetric.\n");
    } 
    else{
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}