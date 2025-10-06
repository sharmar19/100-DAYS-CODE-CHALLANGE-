/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100];

    printf("Enter the string: ");
    fgets(s1, 100, stdin);
    
    s1[strcspn(s1, "\n")] = '\0';

    strcpy(s2,s1);
    strrev(s2);

    if(strcmp(s2,s1)==0){
        printf("The string is a palindrome.");
    }
    else{
        printf("The string is not a palindrome.");
    }

    return 0;
}