#include <stdio.h>

int main() {
    int n, pos, val, choice;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("1.Insert  2.Delete: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter position and value: ");
        scanf("%d %d", &pos, &val);

        for (int i = n; i > pos; i--)
            arr[i] = arr[i - 1];

        arr[pos] = val;
        n++;
    } 
    else if (choice == 2) {
        printf("Enter position: ");
        scanf("%d", &pos);

        for (int i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];

        n--;
    }

    printf("Result: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nBhavya Nandal\n");
    return 0;
}
