  //Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Cannot open input file!");
        return 0;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Cannot create output file!");
        fclose(in);
        return 0;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);   
    }

    fclose(in);
    fclose(out);

    printf("File converted and written to output.txt");

    return 0;
}
