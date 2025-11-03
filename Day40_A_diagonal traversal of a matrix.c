Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    
    int mat[r][c];
    
    // Read matrix
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    
    // Diagonal traversal
    for(int d = 0; d < r + c - 1; d++) {
        int row = (d < r) ? d : r - 1;
        int col = (d < r) ? 0 : d - r + 1;
        
        while(row >= 0 && col < c) {
            printf("%d ", mat[row][col]);
            row--;
            col++;
        }
    }
    
    return 0;
}
