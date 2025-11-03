Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0;
    char *word_start = NULL;

    // Read the sentence (including spaces)
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // When word starts
        if (word_start == NULL && str[i] != ' ' && str[i] != '\n')
            word_start = &str[i];

        // When word ends
        if ((str[i] == ' ' || str[i] == '\n' || str[i+1] == '\0') && word_start != NULL) {
            char *word_end;
            if (str[i] == ' ' || str[i] == '\n')
                word_end = &str[i - 1];
            else
                word_end = &str[i];
            reverseWord(word_start, word_end);
            word_start = NULL; // reset for next word
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
