#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            
        if((i==j)||(i+j)%2==0){
            printf(" 1 ");
        }
        else{
            printf(" 0 ");
        }
        }
    
        
        printf("\n");
    }

    return 0;
}
//  1 
//  0  1 
//  1  0  1 
//  0  1  0  1 
//for printing this type of Pattern;