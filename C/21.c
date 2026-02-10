#include <stdio.h>

int main() {
    int joinYear, currentYear;
    int duration;
    float salary;

    printf("Enter joining year: ");
    scanf("%d", &joinYear);

    printf("Enter current year: ");
    scanf("%d", &currentYear);

    printf("Enter current salary: ");
    scanf("%f", &salary);

    duration = currentYear - joinYear;

    if (duration > 3) {
        salary += 2500;
        printf("Bonus added!\n");
    }

    printf("Working Duration = %d years\n", duration);
    printf("Final Salary = %.2f\n", salary);
    printf("\n Bhavya Nandal \n");
    return 0;
}
