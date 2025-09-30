/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>

int main()
{
    int a[50][50], i, j, m, n, sum[50];

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
        sum[i]=0; 
        for(j=0;j<n;j++){
            sum[i]=sum[i]+a[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for(i=0;i<m;i++){
        printf("Sum of row %d = %d\n", i+1, sum[i]);
    }

    return 0;
}