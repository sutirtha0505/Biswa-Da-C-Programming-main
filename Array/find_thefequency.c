#include<stdio.h>
int main(){
    int a[10],n,freq,value,value1,count=0;
    printf("How Many Value You want to add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nEnter the value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\t\t-------------------------------------------------------------\t\t");
    for(int j=0;j<n;j++){
        printf("\n\nThe value of a[%d]: %d",j,a[j]);
    }
    printf("\n\n\t\t---------------------------------------------------------------\t\t\n\n");
   
        for(int l=0;l<n;l++){
        freq=0;
            for(int k=l;k<n;k++){
                
            if(a[l] == a[k] ){
                freq++;
                
            }
        }
       printf("\n\nthe freq of %d is :%d ",a[l],freq); 
    } 
}