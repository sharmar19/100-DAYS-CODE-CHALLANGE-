/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include<stdio.h>

int main()
{
    int a[50], i, n, b[50];

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        b[i]=a[n-1-i];
    }

    printf("The reversed array is: ");

    for(i=0;i<n;i++){
        printf("%d ", b[i]);
    }
}