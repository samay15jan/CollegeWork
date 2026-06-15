#include <stdio.h>

int main() {
    int withdraw;
    int balance = 1000;

    while (balance > 0) {
        printf("Current balance: %d\n", balance);
        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &withdraw);

        if (withdraw == 0)
            break;

        if (withdraw > balance) {
            printf("Insufficient balance!\n");
        } else {
            balance -= withdraw;
        }
    }

    printf("Transaction ended. Final balance: %d\n", balance);
    printf("\n Samay Kumar \n");

    return 0;
}