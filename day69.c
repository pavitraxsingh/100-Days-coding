//Q119: Write a program to take an integer array as input. 
//Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[1000] = {0}; 
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;          

        if (freq[arr[i]] == 2) { 
            repeated = arr[i];
        }
    }

    printf("%d", repeated);
    return 0;
}
