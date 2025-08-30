/*
Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>

int main()

{
    int percent;

    printf("Enter your percentage: ");
    scanf("%d", &percent);

    if(percent>=90){
        printf("A grade");
    }
    else if(percent>=80){
        printf("B grade");
    }
    else if(percent>=60){
        printf("C grade");
    }
    else if(percent>=40){
        printf("D grade");
    }
    else {
        printf("F garde");
    }

    return 0;
}
