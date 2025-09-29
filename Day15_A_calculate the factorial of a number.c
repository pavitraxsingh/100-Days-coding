Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; // long long to handle large factorials

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%lld\n", fact);
    }

    return 0;
}

