Q76: Check if a matrix is symmetric.



#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    
    scanf("%d", &n); // square matrix
    int mat[n][n];
    
    // Read matrix
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    
    if(flag)
        printf("True");
    else
        printf("False");
    
    return 0;
}
