/*
Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char s[]="HELLO";
    int i = 0;

    while (s[i]!='\0'){
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i]=s[i]-32;
        }
        i++; 
    }

    printf("The string in uppercase is: %s\n", s);

    return 0;
}