#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter the Number of Columns: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    int brr[rows][cols];
    int result[rows][cols];
  
    for(int i=0;i<rows;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols;j++){
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols;j++){
        scanf("%d",&brr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}