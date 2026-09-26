```c
#include <stdio.h>

int main() {

    // =========================================
    // 1. FOR LOOP
    // =========================================
    
    printf("FOR LOOP:\n");

    for(int i = 0; i <= 5; i++) {
        printf("Hello World!! %d\n", i);
    }


    // =========================================
    // 2. WHILE LOOP
    // =========================================

    printf("\nWHILE LOOP:\n");

    int i = 0;

    while(i <= 5) {
        printf("Hello World!! %d\n", i);
        i++;
    }


    // =========================================
    // 3. DO-WHILE LOOP
    // =========================================

    printf("\nDO-WHILE LOOP:\n");

    i = 0;

    do {
        printf("Hello World!! %d\n", i);
        i++;
    } while(i <= 5);


    // =========================================
    // 4. NESTED FOR LOOP
    // =========================================

    printf("\nNESTED FOR LOOP:\n");

    for(int row = 1; row <= 3; row++) {

        for(int col = 1; col <= 3; col++) {
            printf("* ");
        }

        printf("\n");
    }


    // =========================================
    // 5. NESTED WHILE LOOP
    // =========================================

    printf("\nNESTED WHILE LOOP:\n");

    int row = 1;

    while(row <= 3) {

        int col = 1;

        while(col <= 3) {
            printf("* ");
            col++;
        }

        printf("\n");
        row++;
    }


    // =========================================
    // 6. INFINITE FOR LOOP
    // =========================================
    
    // for(;;) {
    //     printf("Infinite Loop\n");
    // }


    // =========================================
    // 7. INFINITE WHILE LOOP
    // =========================================

    // while(1) {
    //     printf("Infinite Loop\n");
    // }


    // =========================================
    // 8. LOOP WITH BREAK
    // =========================================

    printf("\nLOOP WITH BREAK:\n");

    for(int j = 1; j <= 10; j++) {

        if(j == 5) {
            break;
        }

        printf("%d\n", j);
    }


    // =========================================
    // 9. LOOP WITH CONTINUE
    // =========================================

    printf("\nLOOP WITH CONTINUE:\n");

    for(int j = 1; j <= 5; j++) {

        if(j == 3) {
            continue;
        }

        printf("%d\n", j);
    }


    return 0;
}
```
