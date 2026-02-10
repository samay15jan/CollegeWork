#include <stdio.h>

long long power(int x, int y) {
    if (y == 0) return 1;
    return x * power(x, y - 1);
}

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("Result = %lld\n", power(x, y));
    printf("\nBhavya Nandal\n");
    return 0;
}
