/*
Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main()
{
    int a[50], pos=0, neg=0, zero=0, n, i;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]==0){
            zero++;
        }
        else if(a[i]>0){
            pos++;
        }
        else{
            neg++;
        }
    }

    printf("The number of positive numbers are: %d\n", pos); 
    printf("The number of negative numbers are: %d\n", neg);
    printf("The number of zeros are: %d", zero);
}