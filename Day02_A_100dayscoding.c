Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, product, quotient;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculations
    sum = a + b;
    diff = a - b;
    product = a * b;
    
    if (b != 0) {
        quotient = a / b;   // integer division
    } else {
        printf("Division by zero not allowed!\n");
        return 0;
    }

    // Output
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
