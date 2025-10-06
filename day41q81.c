/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include<stdio.h>

int main()
{
    int i=0, string=0;
    char s[]= "Hello World";

    while(s[i]!='\0'){
        string++;
        i++;
    }

    printf("The length of string is: %d", string);

    return 0;

}