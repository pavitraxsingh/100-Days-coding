Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1, n2, i;
    
    scanf("%d", &n1);
    int a[n1];
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &n2);
    int b[n2];
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    
    int c[n1 + n2];
    
    // Copy elements of first array
    for(i = 0; i < n1; i++)
        c[i] = a[i];
    
    // Copy elements of second array
    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];
    
    // Print merged array
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
    
    return 0;
}
