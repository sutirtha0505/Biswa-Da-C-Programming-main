#include<stdio.h>
int main(){
    int n,a[10],evenSum=0,oddSum=0;
    printf("How many Elements Do you Want to Add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value for a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            evenSum+=a[i];
        }
        else{
            oddSum+=a[i];
        }

    }
    if(oddSum==evenSum){
        printf("The entered number is divisible by 11\n");
    }
}
