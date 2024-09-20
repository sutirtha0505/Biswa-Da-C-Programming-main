#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i;  // Subtract even terms
        } else {
            sum += i;  // Add odd terms
        }
    }

    printf("%d", sum);

    return 0;
}
