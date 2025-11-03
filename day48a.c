Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Read both strings
    scanf("%s", str1);
    scanf("%s", str2);

    // If lengths are not equal, they can't be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Create a temporary string: str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
