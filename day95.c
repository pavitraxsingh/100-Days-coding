//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to return the top student
struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];

    for(int i = 1; i < n; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;   // return structure
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    // taking input
    for(int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = findTop(s, n);

    // printing result
    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
