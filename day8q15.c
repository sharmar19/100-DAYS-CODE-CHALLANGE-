/*
Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character
*/

#include<stdio.h>

int main()

{
    char alpha;

    printf("Enter the character: ");
    scanf("%c", &alpha);

    if(alpha >= 'a' && alpha <= 'z'){
        printf("Character is lowercase\n");
    }
    else if(alpha >= 'A' && alpha <= 'Z'){
        printf("Character is uppercase\n");
    }
    else if (alpha >= '0' && alpha <= '9') {
        printf("The character is a digit.\n");
    }
    else{
        printf("Character is special.\n");
    }

    return 0;

}