#include <stdio.h>

int main() {
    int id, count = 0;

    do {
        printf("Enter Book ID (-1 to stop): ");
        scanf("%d", &id);

        if (id != -1)
            count++;

    } while (id != -1);

    printf("Total books returned: %d\n", count);
    printf("\n Samay Kumar \n");

    return 0;
}