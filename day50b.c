Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    // Read the string
    scanf("%s", str);

    len = strlen(str);

    // Generate and print all substrings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if(!(i == len - 1 && j == len - 1))
                printf(",");  // print comma except after last substring
        }
    }

    printf("\n");
    return 0;
}
