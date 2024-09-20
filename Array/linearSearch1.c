#include<stdio.h>

int linearSearch(int arr[],int n,int element){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==element)
		return i;
	}
	return -1;
}

int main(){
	int n,arr[100],i,element;
	printf("Enter the size of an array : ");
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		printf("Enter the value of position array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){ 
		printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
	printf("Enter the element You want to search : ");
	scanf("%d",&element);
	int searchIndex=linearSearch(arr,n,element);
	printf("The %d is found in %d no. index",element,searchIndex);
}
