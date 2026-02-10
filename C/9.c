#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("First number is greater");
    else if (a < b)
        printf("First number is smaller");
    else
        printf("Both numbers are equal");
  printf("\n Bhavya Nandal \n");
    return 0;
}
