/*

Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include<stdio.h>

int main()

{
    int a, b, sum;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second numnber: ");
    scanf("%d", &b);

    sum=a+b;

    printf("The sum of two numbers is: %d", sum);

    return 0;

}