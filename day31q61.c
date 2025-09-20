/*
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>

int main()
{
    int a[50], i, n, num, index;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    for(i=0;i<n;i++){
        if(a[i]==num){
            index=i;
        }
    }

    printf("The given number was found in the index %d", index);
}