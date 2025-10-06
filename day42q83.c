/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include<stdio.h>

int main()
{
    int i=0, v=0, c=0;
    char s[]="Hello";

    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            v++;
        }
        else{
            c++;
        }
        i++;
    }

    printf("The number of vowels and consonants in the string are: %d and %d", v, c);
    
    return 0;
}