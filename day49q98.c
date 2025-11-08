/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100],j=1;

    printf("Enter your name: ");
    fgets(s1,100,stdin);

    s1[strcspn(s,"\n")]=0;

    for(int i=0;i<strlen(s1);i++){
        if(s1[i]==' ')
        s1[i+1]=s2[j];
        j++;
    }

    


}