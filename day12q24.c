/*
Q24: Write a program to calculate an electricity bill based on units consumed.

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include<stdio.h>

int main()

{
    int unit;
    float bill;

    printf("Enter the units consumed: ");
    scanf("%d", &unit);

    if(unit<=50){
        bill=unit*5.0;
        printf("The bill is: %.2f", bill);
    }
    else if(unit<=150){
        bill=unit*6.33;
        printf("The bill is: %.2f", bill);
    }
    else{
        bill=unit*8.80;
        printf("The bill is %.2f", bill);
    }

    return 0;

}