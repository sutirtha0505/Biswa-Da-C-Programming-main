#include<stdio.h>

int main(){
		int n,i,arr[100],odd[100],even[100],j=0,k=0;
	// take the input size of an array
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the value of position array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
	for(i=0;i<n;i++){
		if(i%2==0){
			even[j]=arr[i];
			j++;
		}
		else{
			odd[k]=arr[i];
			k++;
		}
	}
	for(i=0;i<k;i++){
		printf("The value of odd[%d] : %d \n",i,odd[i]);
	}
	for(i=0;i<j;i++){
		printf("The value of even[%d] : %d \n",i,even[i]);
	}
}
