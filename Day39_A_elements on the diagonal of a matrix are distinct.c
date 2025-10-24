Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int r, c, i, j, flag = 1;
    scanf("%d %d", &r, &c);
    
    int mat[r][c];
    
    // Read matrix
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    
    // Check diagonal elements
    for(i = 0; i < r; i++) {
        for(j = i + 1; j < r; j++) {
            if(mat[i][i] == mat[j][j]) {
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

