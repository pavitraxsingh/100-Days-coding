//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int freq[256] = {0};
        int len = 0;

        for(int j = i; j < n; j++) {
            if(freq[(int)s[j]] == 1) {
                break;   // repeating character found
            }

            freq[(int)s[j]] = 1;
            len++;

            if(len > maxLen)
                maxLen = len;
        }
    }

    printf("%d", maxLen);

    return 0;
}
