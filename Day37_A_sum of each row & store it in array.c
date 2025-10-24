Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    
    int mat[r][c], rowSum[r];
    
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;  // initialize row sum
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];  // add to row sum
        }
    }
    
    // Print sum of each row
    for(i = 0; i < r; i++)
        printf("%d ", rowSum[i]);
    
    return 0;
}
