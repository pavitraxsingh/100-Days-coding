//Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, top = 0;
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    for(i = 1; i < n; i++)
        if(s[i].marks > s[top].marks)
            top = i;

    printf("Topper: %s (Marks: %.0f)\n", s[top].name, s[top].marks);

    return 0;
}
