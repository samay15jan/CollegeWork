#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("Enter two decimal numbers:\n");
    scanf("%f %f", &x, &y);

    printf("\n--- Operations on Integers ---\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0)
        printf("Division: %d\n", a / b);
    else
        printf("Division: Not possible (division by zero)\n");

    printf("\n--- Operations on Decimals ---\n");
    printf("Addition: %.2f\n", x + y);
    printf("Subtraction: %.2f\n", x - y);
    printf("Multiplication: %.2f\n", x * y);

    if (y != 0)
        printf("Division: %.2f\n", x / y);
    else
        printf("Division: Not possible (division by zero)\n");

    printf("\n Bhavya Nandal \n");
    return 0;
}
