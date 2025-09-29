Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;
    scanf("%d %d", &a, &b);   // Input two numbers
    
    x = a;
    y = b;

    // Euclidean Algorithm to find GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // LCM formula
    lcm = (x * y) / gcd;

    printf("%d", lcm);
    return 0;
}
