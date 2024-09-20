#include<stdio.h>
int main(){
    int n,flag=0,result=0,magicNumber;
    printf("Rows and Columns number will be the same");
    printf("Enter the Number of Rows and columns: ");
    scanf("%d",&n);
    int arr[n][n];
    

    // Input elements in 2D array
        for(int i=0;i<n;i++){
        printf("Row no %d:",i);
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        result+=arr[0][i];
    }
    magicNumber=result;
    
    for(int i=0;i<n;i++){
        result=0;
        for(int j=0;j<n;j++){
            result+=arr[i][j];
        }
        if(result==magicNumber){
            flag++;
        }
    }
    
    for(int i=0;i<n;i++){
        result=0;
        for(int j=0;j<n;j++){
            result+=arr[j][i];
        }
        if(result==magicNumber){
            flag++;
        }
    }
    result=0;
    int r=n-1,a=0;
    while(r>=0 && a<n){
        result+=arr[a][r];
        a++;
        r--;
    }
    if(result==magicNumber){
        flag++;
    }
    result=0;
    for(int i=0;i<n;i++){
        result+=arr[i][i];
    }
    if(result==magicNumber){
        flag++;
    }
    if(flag==2*n+2){
        printf("The given array is a magic square.\n");
    }
    else{
        printf("The given array is not a magic square.\n");
    }

return 0;
}