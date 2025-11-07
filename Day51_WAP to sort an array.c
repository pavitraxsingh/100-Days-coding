//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. 
//You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main() {
    int n, i, target, first = -1, last = -1;
    int nums[100];

    scanf("%d", &n);            // size of array
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);  // array elements

    scanf("%d", &target);       // target element

    for(i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}

