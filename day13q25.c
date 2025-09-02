/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>

int main()

{
    int a, b;
    float Add, Subtract, Multiply, Divide, Remainder;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter what you want to do (+,-,*,/,%): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        Add=a+b;
        printf("The addition of two numbeer is %.2f", Add);
        break;
    case '-':
        Subtract=a-b;
        printf("The subtraction of two numbers is %f", Subtract);
        break;
    case '*':
        Multiply=a*b;
        printf("The multiplication of two numbers is %.2f", Multiply);
        break;
    case '/':
        Divide=a/b;
        printf("the division of two numbers is %.2f", Divide);
        break;
    case '%':
        Remainder=a%b;
        printf("The remainder of two numbers is %.2f", Remainder);
        break;
    default:
        printf("Invalid Operation");
        break;
    }

    return 0;

}