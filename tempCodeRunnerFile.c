#include <stdio.h>

int main() {
    char str[1000];
    int i, len = 0;
    
    fgets(str, sizeof(str), stdin); // read string including spaces
    
    // calculate length without built-in function
    while(str[len] != '\0' && str[len] != '\n')
        len++;
    
    // print string in reverse
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    
    return 0;
}
