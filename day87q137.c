/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum role current_role;

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0) {
        current_role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        current_role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        current_role = GUEST;
    }

    switch (current_role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}