/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include<stdio.h>

int main()
{
    int i=0;
    char s[100];

    printf("Enter the string: ");
    fgets(s,100,stdin);

    while(s[i]!='\0'){
        if(s[i]==' ')
        s[i]='-';
        i++;
    }

    printf("The updated string is: ");
    puts(s);

    return 0;
}