#include <stdio.h>

int main() {
    float m1, m2, m3, avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3;
    printf("Average = %.2f\n", avg);

    if (avg >= 70)
        printf("Result: First Position with Distinction\n");
    else if (avg >= 60)
        printf("Result: First Division\n");
    else if (avg >= 40)
        printf("Result: Second Division\n");
    else if (avg >= 30)
        printf("Result: Third Division\n");
    else
        printf("Result: Fail\n");
    printf("\n Bhavya Nandal \n");
    return 0;
}
