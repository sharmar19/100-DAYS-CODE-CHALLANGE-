/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include<string.h>
#include<stdio.h>

int main()
{
    int i=0;
    char s[100];

    printf("Enter the string: ");
    fgets(s,100,stdin);
    s[strcspn(s, "\n")] = 0;

    while (s[i]!='\0'){
        if (s[i] >= 'a' && s[i] <= 'z')
        s[i]=s[i]-32;
        else
        s[i]=s[i]+32;
        i++; 
    }

    printf("The updated string is: ");
    puts(s);

    return 0;
}