/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100];

    printf("Enter the string you want to reverse: ");
    fgets(s1, 100, stdin);

    strcpy(s2,s1);
    strrev(s2);

    printf("The reversed string is: %s", s2);

    return 0;
}