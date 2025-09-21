/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include<stdio.h>

int main()
{
    int x, y, i, a[50], b[50], c[50];

    printf("Enter the length of first array: ");
    scanf("%d", &x);

    printf("Enter the length of second array: ");
    scanf("%d", &y);

    for(i=0;i<x;i++){
        printf("Enter the %d element of first array: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<y;i++){
        printf("Enter the %d element of second array: ", i);
        scanf("%d", &b[i]);
    }

    printf("The merged array is: ");

    for(i=0;i<(x+y);i++){
        c[i]=a[i];
    }

    for(i=0;i<(x+y);i++){
        c[x+i]=b[i];
        printf("%d ",c[i]);
    }

}