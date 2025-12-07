//Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Taking input for 5 students
    for(i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }

    // Printing details
    for(i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
