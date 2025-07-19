#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    unsigned long long fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    double root = sqrt((double)fact);
    printf("Factorial: %llu\n", fact);
    printf("Square root of factorial: %.4f\n", root);

    return 0;
}