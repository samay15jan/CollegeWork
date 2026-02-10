#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    printf("\n Bhavya Nandal \n");
    return 0;
}
