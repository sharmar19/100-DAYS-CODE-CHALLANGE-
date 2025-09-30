/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h>

int main()
{
    int a[50][50], i, j, m, n, sum=0;

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

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=sum+a[i][j];
        }
    }

    printf("The sum of all the elements in the array is: %d", sum);
}