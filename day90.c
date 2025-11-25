//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender g;
};

int main() {
    char input[10];
    struct Person p;

    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.g = MALE;
    else
        p.g = FEMALE;

    if (p.g == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
