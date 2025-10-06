/*Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include<stdio.h>

int main()
{
    int i=0;
    char s[]="Hello World";

    while(s[i]!='\0'){
        printf("%c\n", s[i]);
        i++;
    }

    return 0;
}