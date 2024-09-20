#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k=k+2;
        }
        
        printf("\n");
    }

    return 0;

}
// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 
// 21 23 25 27 29 
// for printing this type of Pattern;