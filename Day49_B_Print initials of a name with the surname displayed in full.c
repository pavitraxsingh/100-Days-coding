Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len, lastSpace = -1;

    // Read the full name (including spaces)
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Find the position of the last space (before surname)
    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    // Print initials for all names before surname
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", toupper(str[0]));

    for (i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n')
            printf("%c.", toupper(str[i]));
    }

    // Print the surname in full
    if (lastSpace != -1)
        printf(" %s", &str[lastSpace + 1]);
    else
        printf("%s", str);  // if only one name

    return 0;
}
