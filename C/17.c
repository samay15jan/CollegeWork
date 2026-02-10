#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 60)
        printf("Eligible for Senior Citizen Card");
    else
        printf("Not eligible for Senior Citizen Card");
    printf("\n Bhavya Nandal \n");
    return 0;
}
