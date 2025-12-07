//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
//Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Cannot open file!");
        return 0;
    }

    printf("How many students? ");
    scanf("%d", &n);

    // Write records using fprintf
    for (int i = 0; i < n; i++) {
        printf("Enter Name Roll Marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Read back the data
    fp = fopen("students.txt", "r");

    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
