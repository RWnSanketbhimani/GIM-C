#include <stdio.h>

int main() {
    int i, n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    i = 2;  // Initialize i to the first even number

    do {
        printf("%d ", i);
        i += 2;  // Increment i by 2 to get the next even number
    } while (i <= n);

    printf("\n");

    return 0;
}