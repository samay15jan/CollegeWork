#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("After removing duplicates: ");
    for (int i = 0; i < n; i++) {
        int isDup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDup = 1;
                break;
            }
        }
        if (!isDup)
            printf("%d ", arr[i]);
    }
    printf("\nBhavya Nandal\n");

    return 0;
}
