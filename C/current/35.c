#include <stdio.h>
#include <string.h>

int main() {
    char pass[20];

    do {
        printf("Enter password: ");
        scanf("%s", pass);
    } while (strcmp(pass, "admin123") != 0);

    printf("Access Granted!\n");
    printf("\n Samay Kumar \n");
    return 0;
}