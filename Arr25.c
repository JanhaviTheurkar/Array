#include <stdio.h>

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int main() {
    int a[6] = {3, 5, 8, 11, 15, 17}, sum = 0;
    for(int i = 0; i < 6; i++)
        if(isPrime(a[i])) sum += a[i];
    printf("Sum of primes = %d", sum);
}
