// Count of primes from 1 to N: N = [1, 5000]//
#include <stdio.h>

int main() {
    int num, cnt = 0, i;
    for (num = 2; num <= 5000; num++) {
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
    printf("Total prime numbers between 1 and 5000: %d\n", cnt);
    return 0;
}