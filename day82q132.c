/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h> 

enum traffic {
    RED, 
    YELLOW, 
    GREEN
};

int main() {
    char input[20];
    enum traffic lights;

    printf("Enter the traffic light (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0) {
        lights = RED;
    } 
    else if (strcmp(input, "YELLOW") == 0) {
        lights = YELLOW;
    } 
    else if (strcmp(input, "GREEN") == 0) {
        lights = GREEN;
    }

    switch (lights) {
        case RED:
            printf("STOP\n");
            break;
        case YELLOW:
            printf("WAIT\n");
            break;
        case GREEN:
            printf("GO\n");
            break;
        default:
            printf("Input not recognized.\n");
    }

    return 0;
}