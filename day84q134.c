/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h> 

enum operation {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    char input[20];
    enum operation message;

    printf("Enter the phase (SUCCESS,FAILURE,TIMEOUT): ");
    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0) {
        message=SUCCESS;
    } 
    else if (strcmp(input, "FAILURE") == 0) {
        message=FAILURE;
    } 
    else if (strcmp(input, "TIMEOUT") == 0) {
        message=TIMEOUT;
    }

    switch (message) {
        case SUCCESS:
            printf("Operation success\n");
            break;
        case FAILURE:
            printf("Operation failure\n");
            break;
        case TIMEOUT:
            printf("Operation timeout\n");
            break;
        default:
            printf("Input not recognized.\n");
    }

    return 0;
}