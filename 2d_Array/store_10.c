#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter the Number of Columns: ");
    scanf("%d",&cols);
    int arr[rows][cols];
  
    for(int i=0;i<rows;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols;j++){
        arr[i][j]=10;
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}