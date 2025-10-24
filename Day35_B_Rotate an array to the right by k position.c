Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k, i;
    
    scanf("%d", &n);
    int a[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &k);
    k = k % n;  // in case k > n
    
    // Rotate using a temporary array
    int temp[k];
    for(i = 0; i < k; i++)
        temp[i] = a[n - k + i];
    
    for(i = n - 1; i >= k; i--)
        a[i] = a[i - k];
    
    for(i = 0; i < k; i++)
        a[i] = temp[i];
    
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}
