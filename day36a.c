Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int r, c, i, j;
    
    scanf("%d %d", &r, &c); // rows and columns
    int mat[r][c];
    
    // Read matrix elements
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    
    // Print matrix
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    
    return 0;
}
