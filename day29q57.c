/*
Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>

int main()
{
    int a[90], i, sum=0, n, j;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<=(n-1);i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    for(j=0;j<=(n-1);j++){
        sum=sum+a[j];
    }

    printf("The sum of elements in the array is %d", sum);
}