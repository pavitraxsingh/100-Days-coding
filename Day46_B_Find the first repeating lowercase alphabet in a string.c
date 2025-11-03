Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;
    char result = '\0';

    // Read the string
    scanf("%s", str);

    // Traverse each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) { // when it repeats
                result = str[i];
                break;
            }
        }
    }

    if(result != '\0')
        printf("%c\n", result);
    else
        printf("No repeating character\n");

    return 0;
}
