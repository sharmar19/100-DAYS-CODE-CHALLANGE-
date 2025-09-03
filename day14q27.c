/*
Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>

int main()

{
    int sum, n, i;
    sum=0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        sum=sum+i;
    }

    printf("The sum of %d natural numbers is: %d", n, sum);

    return 0;

}