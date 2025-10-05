//Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Display result
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}
