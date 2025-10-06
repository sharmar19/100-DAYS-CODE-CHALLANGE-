/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include<stdio.h>
#include<string.h>

int main()
{
    int i=0, j=0;
    char s[100];

    printf("Enter the string: ");
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]=0;

    while(s[i]!='\0'){
    if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U'){
        s[j] = s[i];
        j++; 
    }
    i++;
    }

    s[j] = '\0';

    printf("The updated string is: ");
    puts(s);

    return 0;

}