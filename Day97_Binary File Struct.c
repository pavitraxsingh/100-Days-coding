//Q147: Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, r;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("Employee details entered and stored in file.\n");

    fp = fopen("emp.dat", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f", r.name, r.id, r.salary);

    return 0;
}
