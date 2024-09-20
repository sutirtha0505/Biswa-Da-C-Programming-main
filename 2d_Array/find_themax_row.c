#include<stdio.h>
int main(){
    int rows,cols,max=0,mr,ms=0,maxSum;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter the Number of Columns: ");
    scanf("%d",&cols);
    int arr[rows][cols];
  
    for(int i=0;i<rows;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols;j++){
         scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<rows;i++){
        ms=0;
        for(int j=0;j<cols;j++){
        ms+=arr[i][j];    
        }
        if(max<ms){
        mr=i;
        maxSum=ms;
        }
        max=ms;
        }
       printf("Row number having the maximum sum is :%d and the maximum Sum is %d: ",mr,maxSum);
   
    return 0;
    }
