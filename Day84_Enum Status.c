//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status { SUCCESS = 1, FAILURE, TIMEOUT };

int main() {
    int s;
    scanf("%d", &s);   // 1 = SUCCESS, 2 = FAILURE, 3 = TIMEOUT

    enum Status status = s;

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
