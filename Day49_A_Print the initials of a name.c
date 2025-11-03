Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    // Read the full name (including spaces)
    fgets(str, sizeof(str), stdin);

    // Print the first character as the first initial
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", toupper(str[0]));

    // Loop through string to find next initials
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n') {
            printf("%c.", toupper(str[i]));
        }
    }

    printf("\n");
    return 0;
}
