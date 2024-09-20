#include <stdio.h>
int reverse(int arr[], int num)
{
    int i = 0;
    int temp;
    int j = num - 1;
    while (i <= j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int a[10], n, b[10];

    printf("How many numbers do you want to add (up to 10): ");
    scanf("%d", &n);

    // Ensure n does not exceed the array size
    if (n > 10)
    {
        printf("The number of elements cannot exceed 10.\n");
        return 1; // Exit the program with an error code
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    reverse(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}