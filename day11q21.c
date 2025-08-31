/*
Q21: Write a program to display the month name and number of days using switch-case for a given month number.

Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include<stdio.h>

int main()

{
    int month;

    printf("Enter the month number(1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("It's January. Containing 31 days.\n");
        break;
    case 2:
        printf("It's February. Containing 28 days.\n");
        break;
    case 3:
        printf("It's March. Containing 31 days.\n");
        break;
    case 4:
        printf("It's April. Containing 30 days.\n");
        break;
    case 5:
        printf("It's May. Containing 31 days.\n");
        break;
    case 6:
        printf("It's June. Containing 30 days.\n");
        break;
    case 7:
        printf("It's July. Containing 31 days.\n");
        break;
    case 8:
        printf("It's August. Containing 31 days.\n");
        break;
    case 9:
        printf("It's September. Containing 30 days.\n");
        break;
    case 10:
        printf("It's October. Containing 31 days.\n");
        break;
    case 11:
        printf("It's November. Containing 30 days.");
        break;
    case 12:
        printf("It's December. Containing 31 days.\n");
        break;
    default:
        printf("Invalid number");
        break;
    }

    return 0;


}