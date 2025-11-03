Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Read the string
    scanf("%s", str);

    // Read the character to search
    scanf(" %c", &ch); // space before %c removes newline

    // Count frequency
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    // Print result
    printf("%d\n", count);

    return 0;
}
