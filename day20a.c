Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int hasOdd = 0;   // Flag to check if any odd digit is found

    scanf("%d", &n);   // Input number

    while (n > 0) {
        digit = n % 10;   // Extract last digit
        if (digit % 2 == 1) {   // Check if odd
            product *= digit;
            hasOdd = 1;
        }
        n = n / 10;   // Remove last digit
    }

    // If no odd digit found, product should be 1 (as per problem statement)
    printf("%d", product);

    return 0;
}
