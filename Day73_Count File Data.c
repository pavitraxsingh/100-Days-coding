//Q123: Read a text file and count the total number of characters, words, and lines.
// A word is defined as a sequence of non-space characters separated by spaces or newlines.

    #include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 1;  
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        
        if (ch == '\n')
            lines++;

        
        if (ch == ' ' || ch == '\n')
            words++;
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words + 1);   
    printf("Lines: %d\n", lines);

    return 0;
}
