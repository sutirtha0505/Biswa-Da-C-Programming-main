#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    // Print the number of arguments
    int sum=0;
    printf("Number of arguments: %d\n", argc);

    // Print each argument
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
        sum+=atoi(argv[i]);
    }
    printf("Sum of arguments: %d\n", sum);

    return 0;
}
