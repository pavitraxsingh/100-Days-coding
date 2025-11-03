Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Read the string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    // Print the modified string
    printf("%s", str);

    return 0;
}
