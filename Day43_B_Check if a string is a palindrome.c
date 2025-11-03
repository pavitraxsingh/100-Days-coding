Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    // Read the string
    scanf("%s", str);

    len = strlen(str);

    // Check characters from both ends
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
