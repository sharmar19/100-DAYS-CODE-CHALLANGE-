/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    
    printf("*\n\n");
    
    
    for(int i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    
    
    for(int i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");
    
   
    for(int i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    
    
    printf("*\n");
    
    return 0;
}