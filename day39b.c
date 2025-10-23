Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    scanf("%d", &n);  // square matrix size
    
    int mat[n][n];
    
    // Read matrix
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    // Sum of main diagonal
    for(i = 0; i < n; i++)
        sum += mat[i][i];
    
    printf("%d", sum);
    return 0;
}
