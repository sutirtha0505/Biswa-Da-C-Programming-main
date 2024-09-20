#include<stdio.h>
void printArray(int a[10][10],int r,int c){
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
}
void Multiplication(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2){
    int sum=0,c[10][10];
    if(c1==r2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printArray(c,r1,c2);
    }
    else{
        printf("Multiplication is not possible\n");
    }
}
void transpose( int a[10][10],int r,int c){
    int b[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[j][i]=a[i][j];
        }
    }
    printArray(b,c,r);
}

int main(){
int a[10][10],r1,c1,r2,c2,choice,b[10][10];

printf("Choose Your Preferred option of Matrix Operation");
printf("\n1.Transpose\n2.Multiplication\n3.Print Array\n");
scanf("%d",&choice);
switch(choice){
    case 1:
            printf("Enter the number of rows: ");
            scanf("%d",&r1);
            printf("Enter the number of columns: ");
            scanf("%d",&c1);
            for(int i=0;i<r1;i++){

                for(int j=0;j<c1;j++){
                    printf("Enter the value for a[%d][%d] : ",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            transpose(a,r1,c1);
            break;
     case 2:
            printf("Enter the number of rows: ");
            scanf("%d",&r1);
            printf("Enter the number of columns: ");
            scanf("%d",&c1);
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    printf("Enter the value for a[%d][%d] : ",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the number of rows: ");
            scanf("%d",&r2);
            printf("Enter the number of columns: ");
            scanf("%d",&c2);
            for(int i=0;i<r2;i++){
                for(int j=0;j<c2;j++){
                    printf("Enter the value for b[%d][%d] : ",i,j);
                    scanf("%d",&b[i][j]);
                }
            }
            Multiplication(a,b,r1,c1,r2,c2);
             break;
    case 3:
            printf("Enter the number of rows: ");
            scanf("%d",&r1);
            printf("Enter the number of columns: ");
            scanf("%d",&c1);
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    printf("Enter the value for a[%d][%d] : ",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            printArray(a,r1,c1);
           break;
}
}
