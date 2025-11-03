Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], dd[3], mm[3], yyyy[5];
    char month[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    // Read the date
    scanf("%s", date);

    // Extract day, month, year parts
    strncpy(dd, date, 2);
    dd[2] = '\0';

    strncpy(mm, date + 3, 2);
    mm[2] = '\0';

    strncpy(yyyy, date + 6, 4);
    yyyy[4] = '\0';

    // Convert month number to name and print result
    int monthIndex = atoi(mm) - 1;  // convert string to integer (1–12)

    if (monthIndex >= 0 && monthIndex < 12)
        printf("%s-%s-%s\n", dd, month[monthIndex], yyyy);
    else
        printf("Invalid month\n");

    return 0;
}
