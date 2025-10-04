Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Middle row stars = 2*n -1 = 9

    // Top half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


