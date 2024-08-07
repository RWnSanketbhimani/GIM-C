#include <stdio.h>

int main() {
    int i, n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        n = n - 1; // make n odd
    }

    i = n;

    while (i >= 1) {
        printf("%d\n", i);
        i = i - 2; // decrement by 2 to get the next odd number
    }

    return 0;
}