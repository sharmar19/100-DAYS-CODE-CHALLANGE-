/*
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>

int main() {
    int a[50], n, i, num, index;

    printf("Enter the length of array (max 49): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &num);

    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);

    for(i = n; i > index; i--) {
        a[i] = a[i - 1];
    }
    
    a[index] = num;

    printf("The new array is: ");
    for(i = 0; i < (n+1); i++) {
        printf("%d ", a[i]);
    }

    return 0;
}