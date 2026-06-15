#include <stdio.h>

int main() {
    int max, added, current = 0;

    printf("Enter max tank capacity: ");
    scanf("%d", &max);

    while (current < max) {
        printf("Current level: %d\n", current);
        printf("Add water amount: ");
        scanf("%d", &added);

        current += added;
    }

    printf("Tank is full or overflowed! Final level: %d\n", current);
    printf("\n Samay Kumar \n");
    return 0;
}