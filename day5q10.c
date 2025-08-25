/*

Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>

int main()

{
    float h, m, s;
    float intpart1, decpart1, intpart2, decpart2;

    printf("Enter the time in seconds: ");
    scanf("%f", &s);

    h=s/3600;
    intpart1= (int)h;
    decpart1=h-intpart1;
    m=decpart1*60;
    intpart2= (int)m;
    decpart2=m-intpart2;
    s=decpart2*60;

    printf("The time in hours:minutes:seconds format is %.2f:%.2f:%.2f", h, m, s);

    return 0;

}