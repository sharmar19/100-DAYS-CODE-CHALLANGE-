/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[200],s1[200], i;

    printf("Enter your name: ");
    fgets(s,200,stdin);
    s[strcspn(s, "\n")] = 0;

    s1[0]=s[0];
    s1[1]='.';
    s1[3]='.';
    s1[4]='\0';

    for(i=0;i<=strlen(s);i++){
        if(s[i]==' ')
        s1[2]=s[i+1];
    }
    
    printf("The initials are: %s", s1);

    return 0;

}