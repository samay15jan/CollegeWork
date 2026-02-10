#include <stdio.h>

int toMinutes(int h, int m) {
    return h * 60 + m;
}

int main() {
    int h, m;
    printf("Enter hours and minutes: ");
    scanf("%d %d", &h, &m);

    printf("Total Minutes = %d\n", toMinutes(h, m));
    printf("\nBhavya Nandal\n");
    return 0;
}
