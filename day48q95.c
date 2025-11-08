/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100], s3[100], s4[100], i, j=0, k=0;

    printf("Enter the first string: ");
    fgets(s1,100,stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(s2,100,stdin);
    s2[strcspn(s2, "\n")] = 0;
    
    strcat(s3,s1);
    strcat(s1,s3);

    for(i=0;i<=strlen(s1);i++){
        if(s1[i]==s2[j]){
            s4[k]=s2[j];
            k++;
            j++;
        }
    }

    if(strcmp(s4,s2))
    printf("The second string is not the rotation of the first");
    else
    printf("The second string is the roation of the first");

    return 0;
    
    
}