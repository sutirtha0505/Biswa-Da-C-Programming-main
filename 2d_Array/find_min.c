#include<stdio.h>
int main(){
    int rows,cols,min,cr,cc;
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
    min=arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
        
        if(arr[i][j]<min){
            min=arr[i][j];
            cr=i;
            cc=j;
        }
        }
       
    }
    printf("\nThe minimum number of this Array is : %d and the index is %d,%d",min,cr,cc);
    return 0;
}