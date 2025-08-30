/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>

int main()

{
    float a, b, c, d;

    printf("Enter the (a, b , c) coefficients: ");
    scanf("%f %f %f", &a, &b, &c);

    d=b*b-4.0*a*c;

    if(d>0){
        printf("The roots are real and distinct.\n");
    }
    else if(d==0){
        printf("The roots are real and equal.\n");
    }
    else{
        printf("The roots are imaginary and distinct.\n");
    }

    return 0;

}