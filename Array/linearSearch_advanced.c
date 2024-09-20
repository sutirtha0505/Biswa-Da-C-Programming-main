#include <stdio.h>
#include <stdlib.h>

void linearSearch(int a[], int n, int key) {
    int *b, k = 0;
    b = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            b[k] = i;
            k++;
        }
    }

    if (k > 0) {
        printf("%d is found at index/indices: ", key);
        for (int j = 0; j < k; j++) {
            printf("%d ", b[j]);
        }
        printf("\n");
    } else {
        printf("%d is not found in the array\n", key);
    }

    free(b); // Free the allocated memory
}

int main() {
    int n, *a, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    a = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched in the array: ");
    scanf("%d", &key);

    linearSearch(a, n, key);

    free(a); // Free the allocated memory
    return 0;
}
