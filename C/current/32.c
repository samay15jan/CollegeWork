#include <stdio.h>

int main() {
    float price, total = 0;

    while (1) {
        printf("Enter item price (0 to checkout): ");
        scanf("%f", &price);

        if (price == 0)
            break;

        total += price;
    }

    printf("Total Bill = Rs %.2f\n", total);
    printf("\n Samay Kumar \n");

    return 0;
}