/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>
#include<string.h>

int main()
{
    int i=0, freq=0;
    char s[100], character;

    printf("Enter the string: ");
    fgets(s,100,stdin);
    s[strcspn(s, "\n")] = 0;

    printf("Enter the character you want to find the frequency of: ");
    scanf(" %c", &character);

    while(s[i]!='\0'){
        if(s[i]==character)
        freq++;
        i++;
    }

    printf("The frequency of character in the string is: %d", freq);

    return 0;

}