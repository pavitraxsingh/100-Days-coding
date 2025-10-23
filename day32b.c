Q64: Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    long n;
    int count[10] = {0}, digit, max = 0, ans = 0;
    
    scanf("%ld", &n);
    
    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }
    
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            ans = i;
        }
    }
    
    printf("%d", ans);
    return 0;
}
