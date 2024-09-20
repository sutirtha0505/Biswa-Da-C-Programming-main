#include <stdio.h>
void  insertionSort(int arr[],int n){
	int i,j,key;
	int isSorted=1;
	for(i=1;i<=n-1;i++){
		printf("We are working at %d\n",i);
		j=i-1;
		key=arr[i];
		while(j>=0 && arr[j]<key){
			arr[j+1]=arr[j];
			j--;
			isSorted=0;
		}
		arr[j+1]=key;
		if(isSorted)
		return;
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
	insertionSort(arr,n);
	
	for(i=0;i<n;i++){ //after sorting
		printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
}
