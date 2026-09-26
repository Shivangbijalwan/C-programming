#include <stdio.h>

int main() {
    int a = 100, b = 20;

    // Arithmetic Operators
    printf("=== Arithmetic Operators ===\n");

    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %d\n", a / b);
    printf("Modulus        : %d\n", a % b);


    // Increment and Decrement Operators
    printf("\n=== Increment / Decrement Operators ===\n");

    int inc = a;
    printf("Before Increment : %d\n", inc);
    inc++;
    printf("After Increment  : %d\n", inc);

    int dec = a;
    printf("Before Decrement : %d\n", dec);
    dec--;
    printf("After Decrement  : %d\n", dec);


    // Relational Operators
    printf("\n=== Relational Operators ===\n");

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);


    // Logical Operators
    printf("\n=== Logical Operators ===\n");

    printf("(a > 50 && b < 50) : %d\n", a > 50 && b < 50);
    printf("(a < 50 || b < 50) : %d\n", a < 50 || b < 50);
    printf("!(a == b)          : %d\n", !(a == b));


    // Assignment Operators
    printf("\n=== Assignment Operators ===\n");

    int x = 10;

    printf("Initial x : %d\n", x);

    x += 5;
    printf("x += 5    : %d\n", x);

    x -= 3;
    printf("x -= 3    : %d\n", x);

    x *= 2;
    printf("x *= 2    : %d\n", x);

    x /= 4;
    printf("x /= 4    : %d\n", x);

    x %= 3;
    printf("x %%= 3   : %d\n", x);


    return 0;
}