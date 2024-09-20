#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter the Number of Columns: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    // arr[0][0]=12;
    // arr[0][1]=13;
    // arr[1][0]=14;
    // arr[1][1]=15;
    for(int i=0;i<rows;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
        // printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}