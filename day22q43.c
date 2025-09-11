/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int factorial(int a);
int main(){
    
    int i, num, sum=0, temp, a;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp=num;

    for(num;num>0;num=num/10){
    a=num%10;
    sum=sum+factorial(a);
    }
    printf("%d\n", sum);

    if(sum==temp){
    printf("%d is a strong number.", temp);
    }
    else{
        printf("%d is not a strong number.", temp);
    }

    return 0;
    
}

int factorial(int a){
    
    int i, mul;

    mul=1;

    for(i=1;i<=a;i++){
        mul=mul*i;
    }

    return mul;
}