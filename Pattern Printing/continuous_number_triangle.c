#include <stdio.h>

int main()
{
    int n;
    printf("Enter Row Number : ");
    scanf("%d", &n);
    int k = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            k++;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// for printing this type of Pattern;
