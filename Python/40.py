#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], pos[n], k = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos[k++] = arr[i];
    }

    printf("Positive numbers: ");
    for (int i = 0; i < k; i++)
        printf("%d ", pos[i]);

    printf("\nBhavya Nandal\n");
    return 0;
}
