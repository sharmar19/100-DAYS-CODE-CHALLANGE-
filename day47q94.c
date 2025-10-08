/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char w1[100] ="0"; 
    char w2[100] ="0"; 
    
    int i = 0; 
    int j = 0; 
    int max=0;

    printf("Enter a sentence: ");
    fgets(sentence, 200, stdin);
    sentence[strcspn(sentence, "\n")]=0;

    while (sentence[i]!='\0') {
        if (sentence[i]!=' ') {
            w2[j]=sentence[i];
            j++;
        } 
        else {
            w2[j]='\0'; 

            if (j>max) {
                max=j;
                strcpy(w1, w2);
            }
            j = 0;
        }
        i++; 
    }

    w2[j]='\0';
    if (j>max) {
        strcpy(w1, w2);
    }

    if (strlen(w1)>0) {
        printf("The longest word is: %s", w1);
    } else {
        printf("No words were found in the sentence");
    }

    return 0;
}