Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Series: (2*i - 1) / (2*i) for i = 1 to n
    for(i = 1; i <= n; i++) {
        sum += (float)(2*i - 1) / (2*i);
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
