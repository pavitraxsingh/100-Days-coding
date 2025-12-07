//Q124: Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceName[50], destName[50];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Cannot open source file!");
        return 0;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Cannot create destination file!");
        fclose(src);
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);   
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destName);

    return 0;
}

