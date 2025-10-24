Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, i, pos;
    
    scanf("%d", &n);
    int a[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &pos);  // position to delete
    
    // Shift elements left from that position
    for(i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    
    n--; // decrease size
    
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}
