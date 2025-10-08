/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i=0, found=0, j;

    printf("Enter the string: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")]=0; 

    while(s[i]!='\0'){
        j=i+1;
        while(s[j]!='\0'){
            if(s[i]==s[j]) {
                printf("The first repeating character in the string is: %c", s[i]);
                found=1; 
                break;  
            }
            j++;
        }
        if(found==1) {
            break; 
        }
        i++;
    }

    if(found==0) {
        printf("There are no repeating characters in the string.\n");
    }

    return 0;
}