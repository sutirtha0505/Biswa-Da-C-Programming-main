//find the thrid minimum number

#include<stdio.h>
int main(){
    int a[10],min,n,max,secondMin=0,thirdMin=0;
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
    max=a[0];
    for(int k=0;k<n;k++){
        if(a[k]>max){
            max=a[k];
        }
    }
    printf("\n\nThe maximum value is : %d",max);
    printf("\n\n\t\t---------------------------------------------------------------\t\t\n\n");
    min=max;
    for(int l=0;l<n;l++){
        if(a[l]<min){
            thirdMin=secondMin;
            secondMin=min;
            min=a[l];
        }
        else if(a[l]<secondMin && a[l]!=min){
            thirdMin=secondMin;
            secondMin=a[l];
        }
        else if(a[l]<thirdMin && a[l]!=min && a[l]!=secondMin){
            thirdMin=a[l];
        }
    }
    printf("The minimum number is : %d\n",min);
    printf("The second minimum number is : %d\n",secondMin);
    printf("The third minimum number is : %d\n",thirdMin);

}