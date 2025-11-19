/*
Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.


Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include <stdio.h>

enum days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum days day;

    for (day = SUNDAY; day <= SATURDAY; day++) {
        switch (day) {
            case SUNDAY:
                printf("SUNDAY");
                break;
            case MONDAY:
                printf("MONDAY");
                break;
            case TUESDAY:
                printf("TUESDAY");
                break;
            case WEDNESDAY:
                printf("WEDNESDAY");
                break;
            case THURSDAY:
                printf("THURSDAY");
                break;
            case FRIDAY:
                printf("FRIDAY");
                break;
            case SATURDAY:
                printf("SATURDAY");
                break;
        }
        
        printf(": %d\n", day);
    }

    return 0;
}