/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>

int main()
{
    int i, num, sum;

    sum=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0) {
        i = num % 10;
        sum = sum + i;
        num = num / 10;
    }

    printf("The sum of digits of the number is %d\n", sum);

    return 0;
}