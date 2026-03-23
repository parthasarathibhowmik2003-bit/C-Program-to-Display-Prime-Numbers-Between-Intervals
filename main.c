#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) {
        if(i <= 1) continue;  // Skip 0 and 1

        isPrime = 1; // Assume number is prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
