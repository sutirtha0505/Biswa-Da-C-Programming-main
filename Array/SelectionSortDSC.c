#include<stdio.h>
void swap(int *A,int *B){
	int temp;
	temp=*A;
	*A=*B;
	*B=temp;	
}
void selectionSort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int indexOfMax=i;
		for(j=i+1;j<n;j++){
			if(arr[indexOfMax]<arr[j]){
				indexOfMax=j;
			}
  		}
  		swap(&arr[i],&arr[indexOfMax]);
	}
}
int main(){
		int n,arr[100],i;
	printf("Enter the size of an array : ");
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		printf("Enter the value of position array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){ //before sorting
		printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
	selectionSort(arr,n);
	for(i=0;i<n;i++){ //after sorting
		printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
}
