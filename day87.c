//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum Role r;

    scanf("%s", input);

    if(strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if(strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    switch(r) {
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
