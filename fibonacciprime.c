#include<stdio.h>

int isPrime(int n) {
    if(n <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for(int i = 2; i<n; i++) { // Optimized to check up to sqrt(n)
        if(n % i == 0) {
            return 0; // Not prime if divisible by any number other than 1 and itself
        }
    }
    return 1; // Prime
}
int fibonacci(int n) {
    if(n==1) {
        return 0;
    }
    if(n==2) {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // if(isPrime(n)) {
    //     printf("%d is a prime number\n", n);
    // } else {
    //     printf("%d is not a prime number\n", n);
    // }
    for(int i=1;i<=n;i++) {
        if(isPrime(fibonacci(i))) {
            printf("%d\n",fibonacci(i));
        }

    }

    return 0;
}
