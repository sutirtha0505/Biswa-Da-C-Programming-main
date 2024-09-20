#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", j + 64);
        }

        printf("\n");
    }

    return 0;
}
// A
// A B
// A B C
// A B C D
// for printing this type of Pattern;
