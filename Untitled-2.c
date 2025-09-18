Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>7
#include <math.h>

int main() {
    float radius, area, circumference;

    // Input
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = M_PI * radius * radius;          // πr²
    circumference = 2 * M_PI * radius;      // 2πr

    // Output with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
