#include <stdio.h>
int main(){
int rows,cols;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter the Number of Columns: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    int result[rows][cols];
    for(int i=0;i<rows;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols;j++){
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
        result[i][j] =arr[j][i];
    }
    }
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}