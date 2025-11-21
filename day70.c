//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    // Capitalize first character if needed
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    for (int i = 1; str[i] != '\0'; i++) {

        // If previous char is space and current is small letter → make capital
        if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}


