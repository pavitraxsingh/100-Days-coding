Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and add them
    for(i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the number
    if(sum == num && num != 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
