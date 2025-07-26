#include <stdio.h>

int main() {
    int n ; // Height of the diamond (middle line), change to adjust size
    int i, j;
    printf("Enter integer n : ");
    scanf("%d",&n);

    // Upper part
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf("_");
            }
            printf("*");
        }
        printf("\n");
    }

    // Lower part
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf("_");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}