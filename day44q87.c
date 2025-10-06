/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<string.h>
#include<stdio.h>

int main()
{
    int i=0, space=0, digit=0, special=0, alphabet=0;
    char s[100];

    printf("Enter the string: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0;

    while(s[i]!='\0'){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        alphabet++;
        else if(s[i]==' ')
        space++;
        else if(s[i] >= '0' && s[i] <= '9')
        digit++;
        else
        special++;
        i++;
    }

    printf("The number of alphabets, spaces, digits and special characters are: %d, %d, %d and %d respectively.", alphabet, space, digit, special);

    return 0;

}