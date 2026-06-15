#include <stdio.h>

int main() {
    int code;

    printf("Menu:\n1. Burger - Rs 120\n2. Pizza - Rs 200\n3. Pasta - Rs 150\n");
    printf("Enter item code (1-3): ");
    scanf("%d", &code);

    switch (code) {
        case 1:
            printf("Price: Rs 120\n");
            break;
        case 2:
            printf("Price: Rs 200\n");
            break;
        case 3:
            printf("Price: Rs 150\n");
            break;
        default:
            printf("Invalid item code!\n");
    }
    printf("\n Samay Kumar \n");
    return 0;
}