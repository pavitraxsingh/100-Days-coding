Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);   // Input two numbers

    // Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);   // 'a' now contains the HCF
    return 0;
}

