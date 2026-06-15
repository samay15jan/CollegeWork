#include <stdio.h>

int main() {
    char grade;

    printf("Enter grade (A/B/C/F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("\n Samay Kumar \n");

    return 0;
}