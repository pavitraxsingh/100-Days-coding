//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


#include <stdio.h>
#include <string.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    char input[10];
    scanf("%s", input);

    enum Light signal;

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input\n");
        return 0;
    }

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
