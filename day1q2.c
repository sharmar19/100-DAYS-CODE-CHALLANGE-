/*

Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>

int main()

{

    float num1, num2, sum, diff, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum=num1+num2;
    printf("The sum of two numbers is: %.2f\n", sum);

    diff=num1-num2;
    printf("The difference of two numbers is: %.2f\n", diff),

    product=num1*num2;
    printf("The product of two numbers is: %.2f\n", product);

    quotient=num1/num2;

    if(num2 != 0)
    {
        printf("The quotient of two numbers is: %.2f", quotient);
    }

    else
    {
        printf("Division is not possible");
    }

    return 0;

}







