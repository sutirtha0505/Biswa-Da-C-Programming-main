#include <stdio.h>

int main() {
    int a[10], n, count = 0;

    printf("How many numbers do you want to add (up to 10): ");
    scanf("%d", &n);

    // Ensure n does not exceed the array size
    if (n > 10) {
        printf("The number of elements cannot exceed 10.\n");
        return 1; // Exit the program with an error code
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (a[j] + a[k] == 12) {
                count++;
            }
        }
    }

    printf("Count of pairs summing to 12 is: %d\n", count);

    return 0;
}
