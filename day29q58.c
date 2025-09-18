/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include<stdio.h>

int main()
{
    int n, i, a[90], max, j, min, k;
    
    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<=(n-1);i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    max=a[0];

    for(j=0;j<=(n-1);j++){
        if(a[j]>max){
            max=a[j];
        }
    }

    printf("The maximum value among the elements of array is %d\n", max);

    min=a[0];

    for(k=0;k<=(n-1);k++){
        if(a[k]<min){
            min=a[k];
        }
    }

    printf("The minimum value among the elements of array is %d", min);

}