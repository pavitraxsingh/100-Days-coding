//Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
//Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");  

    if (fp == NULL) {
        printf("Cannot open file!");
        return 0;
    }

    printf("Enter text to append: ");
    getchar();              
    fgets(text, 100, stdin);

    fputs(text, fp);        

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}


