#include <stdio.h>

int main() {
    int n,m;
    printf("Enter a Row No. : ");
    scanf("%d",&n);
    printf("Enter a Column No. : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
    }
        
        
        printf("\n");
    }
 
    return 0;

}
//  *  *  *  *  * 
//  *           * 
//  *           * 
//  *  *  *  *  * 
// for printing this type of Pattern;
