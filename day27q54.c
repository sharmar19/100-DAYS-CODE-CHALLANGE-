/*
Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include<stdio.h>

int main()

{
    int i, j;

    for(i=1;i<=5;i++){
        if(i%2!=0){
           for(j=1;j<=i;j++){
            printf("*");
           }
        }
        printf("\n");
    }

    for(i=1;i<=7;i++){
        printf("*");
    }

    printf("\n");

    for(i=3;i>=1;i--){
        if(i%2!=0){
            for(j=1;j<=i;j++){
                printf("*");
            }
        }
        printf("\n");
    }
}