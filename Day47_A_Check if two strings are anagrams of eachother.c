Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, flag = 0;

    // Read both strings
    scanf("%s", str1);
    scanf("%s", str2);

    // If lengths are not equal, not anagrams
    if(strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count frequency of each character in both strings
    for(i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }

    // Compare frequencies
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
