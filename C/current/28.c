#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1-Add\n2-Subtract\n3-Multiply\n4-Divide\n");
    printf("Choose operation: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Cannot divide by zero!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    printf("\n Samay Kumar \n");

    return 0;
}