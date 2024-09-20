#include<stdio.h>
int main(){
    int a[10],min,n,max,secondMax;
    printf("How Many Value You want to add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nEnter theb value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\t\t-------------------------------------------------------------\t\t");
    for(int j=0;j<n;j++){
        printf("\n\nThe value of a[%d]: %d",j,a[j]);
    }
    min=a[0];
    for(int k=0;k<n;k++){
        if(a[k]<min){
            min=a[k];
        }
    }
    // printf("\n\nThe minimum value is : %d",min);
    printf("\n\n\t\t---------------------------------------------------------------\t\t\n\n");
    max=min;
    for(int l=0;l<n;l++){
        if(a[l]>max){
            secondMax=max;
            max=a[l];
        }
        else if(a[l]>secondMax && a[l]!=max){
            secondMax=a[l];
        }
    }
    printf("The second maximum number is : %d",secondMax);
}
