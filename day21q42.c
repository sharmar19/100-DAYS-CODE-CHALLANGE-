/*
Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include<stdio.h>

int main()

{
    int num, i, add=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i=1;i<num;i++){
        if(num%i==0){
            add=add+i;
        }
        else{
            continue;
        }
    }

    if(add==num){
        printf("%d is a prefect number.", num);
    }
    else{
        printf("%d is not a prefect number.", num);
    }

    return 0;

}