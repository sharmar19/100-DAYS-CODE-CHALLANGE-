/*
Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>

int main()

{
    int mul, n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    mul=1;

    for(i=1;i<=n;i++){
        mul=mul*i;
    }

    printf("The factorial of %d is %d", n, mul);

    return 0;
    
}