/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include<stdio.h>

int main()
{
    char s1[200];

    printf("Enter the sentence: ");
    fgets(s1,200,stdin);
    s1[strcspn(s1, "\n")] = 0;

    


}