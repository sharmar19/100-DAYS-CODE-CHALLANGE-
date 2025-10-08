/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h> 

void bubblesort(char *str){
    char temp;
    int i, j;
    int length = strlen(str);

    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (strlen(str1) != strlen(str2)) {
        printf("The strings have different lengths, so they are NOT anagrams.");
        return 0; 
    }

    bubblesort(str1);
    bubblesort(str2);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are anagrams.");
    } else {
        printf("The strings are not anagrams.");
    }

    return 0;
}