#include <stdio.h>

int main() {
    int P, R, T;
    int SI;

    printf("Enter the Total amount: ");
    scanf("%d", &P);

    printf("Enter the Time Period (in months): ");
    scanf("%d", &T);

    printf("Enter the Rate of interest: ");
    scanf("%d", &R);

    SI = (P * R * T) / 100;

    printf("\nSimple interest is: %d\n", SI);
    printf("Bhavya Nandal\n");

    return 0;
}
