#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    printf("\nBhavya Nandal\n");
    printf("Largest = %d\n", max);
    printf("\nBhavya Nandal\n");
    return 0;
}
