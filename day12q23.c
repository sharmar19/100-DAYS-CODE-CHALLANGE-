/*

Q23: Write a program to calculate a library fine based on late days.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>
int main()
{
int days;
int fine;
printf("Enter the number of late days:  ");
scanf("%d", &days);
if ( days <= 4) {
fine=days*2;
printf("The fine is %d", fine);
}
else if(days<=8){
    fine=days*4;
    printf("The fine is %d", fine);
}
else if(days<=15) {
    fine=days*6;
    printf("The fine is %d", fine);
}
else{
    printf("Membership cancelled");
}
return 0;
}