//Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student a, b;

    scanf("%s %d", a.name, &a.roll);
    scanf("%s %d", b.name, &b.roll);

    if(strcmp(a.name, b.name) == 0 && a.roll == b.roll)
        printf("Identical");
    else
        printf("Not Identical");

    return 0;
}


