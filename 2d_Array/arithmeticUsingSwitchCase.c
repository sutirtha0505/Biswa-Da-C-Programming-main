#include<stdio.h>
void addition(){
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

    
    return ;
}
void substraction(){
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
            result[i][j]=arr[i][j]-brr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    
    return ;
}
void multiplication(){
     int rows1,cols1,rows2,cols2;
    printf("Enter the Number of Rows of first matrix: ");
    scanf("%d",&rows1);
    printf("Enter the Number of Columns of first matrix: ");
    scanf("%d",&cols1);
    int arr[rows1][cols1];
    printf("Enter the Number of Rows of second matrix: ");
    scanf("%d",&rows2);
    printf("Enter the Number of Columns of second matrix: ");
    scanf("%d",&cols2);
    int brr[rows2][cols2];
    int result[rows1][cols2];
  // taking input for first matrix
    for(int i=0;i<rows1;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols1;j++){
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    // taking input for second matrix
    for(int i=0;i<rows2;i++){
        printf("Row no %d:",i);
        for(int j=0;j<cols2;j++){
        scanf("%d",&brr[i][j]);
        }
        printf("\n");
    }
    //checks if the matrix valid or not
    if(cols1==rows2){
        for(int i=0;i<rows1;i++){
            for(int j=0;j<cols2;j++){
                result[i][j] =0; // initialize the result
            for(int k=0;k<cols1;k++){
                result[i][j]+=arr[i][k]*brr[k][j];// performing the multiplication
            }
            }
        }
        for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    }
    else{
        printf("Multiplication is not possible\n");
        return ;
    }
}
void transpose(){
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

    return ;
}
int main(){
    int choice;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Transpose\n5.Exit\n");
    printf("Enter your choice (1-5):\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        substraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        transpose();
        break;
    case 5:
        break;        

    default:
        break;
    }
}