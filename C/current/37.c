#include <stdio.h>

int main() {
    int choice;
    int a = 0, b = 0, c = 0;

    do {
        printf("\n1. Vote A\n2. Vote B\n3. Vote C\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: a++; break;
            case 2: b++; break;
            case 3: c++; break;
            case 4: break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    printf("\nFinal Votes:\nA = %d\nB = %d\nC = %d\n", a, b, c);
    printf("\n Samay Kumar \n");

    return 0;
}