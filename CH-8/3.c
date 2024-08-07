#include <stdio.h>

int main() {
    int i = 1, n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}