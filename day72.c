//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
//The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("info.txt", "r");  

    if (fp == NULL) {
        printf("Cannot open file!");
        return 0;
    }

    while (fgets(text, 100, fp)) {   
        printf("%s", text);          
    }

    fclose(fp);
    return 0;
}


