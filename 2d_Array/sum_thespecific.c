#include<stdio.h>
int main(){
    int rows,cols,ss=0,sr,sc,er,ec;
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
   printf("Enter your starting row postion : ");
   scanf("%d",&sr);
   printf("Enter your starting column postion : ");
   scanf("%d",&sc);
   printf("Enter your ending row postion : ");
   scanf("%d",&er);
   printf("Enter your ending column postion : ");
   scanf("%d",&ec);

    for(int i=sr;i<=er;i++){
        for(int j=sc;j<=ec;j++){
        ss+=arr[i][j];
       
        }
        }
       
    printf("\nThe Sum of this Specific area is : %d",ss);
    return 0;
    }
