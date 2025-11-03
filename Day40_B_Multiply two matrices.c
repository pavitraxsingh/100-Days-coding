Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    // First matrix
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    
    // Second matrix
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    
    // Result matrix
    int res[r1][c2];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++) {
            res[i][j] = 0;
            for(k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    
    // Print result
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    
    return 0;
}
