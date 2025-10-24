Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    
    scanf("%d", &n);
    int a[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    
    while(low <= high) {
        mid = (low + high) / 2;
        
        if(a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    printf("-1");
    return 0;
}
