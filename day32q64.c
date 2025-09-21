/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>

int main()
{
    int a[50], i, n, b, freq=0;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number you want to find the frequency of: ");
    scanf("%d", &b);
    
    for(i=0;i<n;i++){
        if(a[i]==b){
            freq++;
        }
    }

    printf("The frequency of number entered is: %d", freq);
}   
