/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h>

int main()
{
    int a[50][50], i, j, m, n;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d row and %d coloumn: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The entered matrix is: \n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}   