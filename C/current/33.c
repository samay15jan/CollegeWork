#include <stdio.h>

int main() {
    int seats = 20, book;

    while (seats > 0) {
        printf("Available seats: %d\n", seats);
        printf("Enter seats to book (0 to exit): ");
        scanf("%d", &book);

        if (book == 0)
            break;

        if (book > seats) {
            printf("Not enough seats available!\n");
        } else {
            seats -= book;
        }
    }

    printf("Booking closed.\n");
    printf("\n Samay Kumar \n");
    return 0;
}