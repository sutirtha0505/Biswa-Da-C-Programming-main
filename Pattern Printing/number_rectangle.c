#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// for printing this type of Pattern;
