//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;   // nested structure
};

int main() {
    struct Employee e;

    // input
    scanf("%s %d %d %d %d", 
          e.name, 
          &e.id, 
          &e.join.day, 
          &e.join.month, 
          &e.join.year);

    // output
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, 
           e.join.day, e.join.month, e.join.year);

    return 0;
}

