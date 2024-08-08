#include <stdio.h>

int main() {
    int n, i;
    long long fib1 = 0, fib2 = 1, fibNext;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    // Print the first two Fibonacci numbers
    printf("%lld, %lld, ", fib1, fib2);

    // Print the remaining Fibonacci numbers
    for (i = 3; i <= n; i++) {
        fibNext = fib1 + fib2;
        printf("%lld, ", fibNext);
        fib1 = fib2;
        fib2 = fibNext;
    }

    printf("\n");

    return 0;
}