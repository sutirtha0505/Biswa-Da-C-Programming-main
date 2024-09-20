#include<stdio.h>
int main(){
    int arr[10],n,oddSum=0,average=0,min,max;
    printf("Enter the number of Value You want input : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]%2!=0){
           oddSum+=arr[i];
       }
       if(arr[i]<min){
           min=arr[i];
       }
       if(arr[i]>max){
           max=arr[i];
       }

    }
    average=oddSum/n;
    printf("The sum of the odd elements is : %d\n",oddSum);
    printf("The average of odd elements is : %d\n",average);
    printf("The minimum value is : %d\n",min);
    printf("The maximum value is : %d\n",max);

}
