#include <stdio.h>
#include <string.h>

Void main() {
    char color[] = "red";

    if (strcmp(color, "green") == 0) {
        printf("You can go now");
    }
    else if (strcmp(color, "orange") == 0) {
        printf("You have to watch and go");
    }
    else {
        printf("Don't move");
    }

    
}