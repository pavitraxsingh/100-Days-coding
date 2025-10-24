Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, x, pos;
    
    scanf("%d", &n);
    int a[n + 1];  // +1 for new element
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &x);
    
    // Find position to insert
    for(pos = n - 1; pos >= 0 && a[pos] > x; pos--) {
        a[pos + 1] = a[pos];
    }
    
    a[pos + 1] = x;
    n++;
    
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}
