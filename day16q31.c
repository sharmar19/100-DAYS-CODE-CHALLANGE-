/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>

int main()

{
    int a, r=0, b=1, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num!=0){
        a=num%2;
        r=r+(a*b);
        b=b*10;
        num=num/2;
    }

    printf("The binary representation of %d is %d", num, r);

    return 0;

}