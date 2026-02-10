#include <stdio.h>

int main() {
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic < 1500) {
        da = 0.9 * basic;
        hra = 0.1 * basic;
    } else {
        da = 0.98 * basic;
        hra = 500;
    }

    gross = basic + da + hra;

    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("Gross Salary = %.2f\n", gross);
    printf("\n Bhavya Nandal \n");
    return 0;
}
