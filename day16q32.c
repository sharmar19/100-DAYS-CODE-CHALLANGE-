/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main()

{
    int num, temp, reverse, remainder;

    remainder=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp=num;
    
    while(1){
        if(num>0){
            remainder=num%10;
            reverse=reverse*10+remainder;
        }
        else {
            break;
        }
        
        num=num/10;
    }

    printf("The reversed number is: %d\n", reverse);

    if(temp==reverse){
        printf("The number '%d' is palindrome.", temp);
    }
    else {
        printf("The number '%d' is not palindrome.", temp);
    }

    return 0;
    
}