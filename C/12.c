#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d is greater", a) : printf("%d is greater", b);
    printf("\n Bhavya Nandal \n");
    return 0;
}
