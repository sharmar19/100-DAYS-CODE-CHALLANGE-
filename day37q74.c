/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h> 

int main() 
{ 
    static int array[10][10]; 
    int i, j, m, n; 
    
    printf("Enter the order of the matrix \n"); 
    scanf("%d %d", &m, &n); 

    
    for (i = 0; i < m; ++i){ 
        for (j = 0; j < n; ++j){
            printf("Enter the %d and %d element: ", i, j); 
            scanf("%d", &array[i][j]); 
        } 
    }
    
    printf("The given matrix is \n"); 
    
    for (i = 0; i < m; ++i){ 
        for (j = 0; j < n; ++j){ 
            printf(" %d", array[i][j]); 
        } 
        printf("\n"); 
    } 
    
    printf("Transpose of matrix is \n"); 
    for (j = 0; j < n; ++j){ 
        for (i = 0; i < m; ++i){ 
            printf(" %d", array[i][j]); 
        } 
        printf("\n"); 
    } 
}