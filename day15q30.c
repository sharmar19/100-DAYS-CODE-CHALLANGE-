/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>

int main()

{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num); 
    
    while(1){
        if(num!=0){
            printf("%d", num%10);
        }
        else {
            break;
        }
        
        num=num/10;
    }

    return 0;
    
}