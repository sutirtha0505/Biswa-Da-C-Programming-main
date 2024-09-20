// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     int nst = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf("   ");
//         }
//         for (int k = 1; k <= nst; k++)
//         {
//             printf(" * ");
//         }

//         nst = nst + 2;
//         printf("\n");
//     }

//     return 0;
// }
// //           *
// //        *  *  *
// //     *  *  *  *  *
// //  *  *  *  *  *  *  *
// // for printing this type of Pattern;
#include <stdio.h>

int main() {
    int rows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for(int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars in the pyramid
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
