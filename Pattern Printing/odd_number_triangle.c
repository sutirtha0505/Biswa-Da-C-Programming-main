#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k=k+2;
        }
        
        printf("\n");
    }

    return 0;

}
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j=j+2){
//             printf("%d ",j);
            
//         }
        
//         printf("\n");
//     }

//     return 0;

// } // We can also solve in this way...
// 1 
// 1 3
// 1 3 5
// 1 3 5 7 
// for printing this type of Pattern;
