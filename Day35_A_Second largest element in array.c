Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i, largest, second;
    
    scanf("%d", &n);
    int a[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    largest = second = -2147483648; // smallest integer
    
    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }
    
    printf("%d", second);
    return 0;
}
