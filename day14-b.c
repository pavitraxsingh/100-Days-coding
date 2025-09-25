Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long for big results
    int found = 0;          // To check if there are any even numbers

    // Input n
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {   // loop through even numbers only
        product *= i;
        found = 1;
    }

    if (found)
        printf("%lld\n", product);
    else
        printf("No even numbers in the range\n");

    return 0;
}
