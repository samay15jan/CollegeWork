#include <stdio.h>

int main() {
    int zone;

    printf("Enter zone (1-4): ");
    scanf("%d", &zone);

    switch (zone) {
        case 1:
            printf("Fare = Rs 10\n");
            break;
        case 2:
            printf("Fare = Rs 20\n");
            break;
        case 3:
            printf("Fare = Rs 30\n");
            break;
        case 4:
            printf("Fare = Rs 40\n");
            break;
        default:
            printf("Invalid zone!\n");
    }
    printf("\n Samay Kumar \n");

    return 0;
}