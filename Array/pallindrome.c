#include <stdio.h>
int palindrome(int arr[], int num)
{   
    int trueCount=0;
    int i = 0;
    int j = num - 1;
    while (i <= j)
    {
       if(arr[i]==arr[j]){
        trueCount++;
       }
        i++;
        j--;
    }
    if(trueCount==(num+1)/2){
       return 1;
    }
    else{
        return 0;
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
    
    if(palindrome(a, n)){
     printf("This is a palindrome array");

    }else{

     printf("This is not a palindrome array");
    }

}