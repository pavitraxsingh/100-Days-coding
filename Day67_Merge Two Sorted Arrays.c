//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m+n];
    int i = 0, j = 0, k = 0;

    // Merge process
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // If elements left in nums1
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // If elements left in nums2
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print merged array
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
