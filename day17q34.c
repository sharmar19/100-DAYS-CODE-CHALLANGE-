/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>

int main()

{
    int num, i, n;

    printf("Enter the number: ");
    scanf("%d", &num);

    n=0;

    if(num==0 || num==1){
        printf("The number is not prime.");
    }

    else{
        for(i=2;i<=num/2;i++){
             if(num%i!=0){
                n++;
             }
        }
       
    }
    if(n==(num/2)-1){
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
}