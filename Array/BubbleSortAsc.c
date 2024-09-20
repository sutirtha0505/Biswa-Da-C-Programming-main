#include<stdio.h>
void swap( int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubbleSort(int arr[],int n){
	int i,j,isSorted=1;
		for(i=0;i<n-1;i++){ //For the passes
		printf("Working on Pass :%d\n",i);
			for(j=0;j<n-1-i;j++){ //For comparison
				if(arr[j]>arr[j+1]){
					swap(&arr[j],&arr[j+1]);
					isSorted=0;
				}
			}
			if(isSorted){
			return;
			}
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
	bubbleSort(arr,n);
	for(i=0;i<n;i++){ //after sorting
		printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
	
	
}
