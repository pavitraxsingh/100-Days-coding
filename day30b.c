//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Output results
    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);

    return 0;
}

