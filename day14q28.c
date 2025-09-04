/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>

int main()

{
    int mul, n, i;
    mul=1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=2;i<=n;i=i+2){
        mul=mul*i;
    }

    printf("The multiplaication of first %d natural numbers is: %d", n, mul);

    return 0;
    

}
