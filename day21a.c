Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, power, middlePart, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Get last digit
    lastDigit = num % 10;

    // Count digits
    digits = (int)log10(num);

    // Get first digit
    firstDigit = num / (int)pow(10, digits);

    // Extract middle part (without first and last digit)
    middlePart = num % (int)pow(10, digits); 
    middlePart = middlePart / 10;

    // Swap first and last
    swapped = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
