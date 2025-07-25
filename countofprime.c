// Count of primes from 1 to N: N = [1, 2e5]//
#include <stdio.h>
int main() {
    int num, cnt = 0, i;
    for (num = 2; num <= 2e5; num++) {
        int Prime = 1;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            cnt++;
        }
    }
    printf("Total prime numbers between 1 and 2e5: %d\n", cnt);
    return 0;
}