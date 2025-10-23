Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, x;
    scanf("%d", &n);
    int a[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("Found at index %d", i);
            return 0;
        }
    }
    
    printf("-1");
    return 0;
}
