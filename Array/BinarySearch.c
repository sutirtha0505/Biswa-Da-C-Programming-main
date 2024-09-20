#include<stdio.h>
void  insertionSort(int arr[],int n){
	int i,j,key;
	int isSorting=1;
	for(i=1;i<=n-1;i++){
		printf("We are working at %d\n",i);
		j=i-1;
		key=arr[i];
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
			isSorting=0;
		}
		arr[j+1]=key;
		if(isSorting){
			return;
		}
	}
}
int binarySearch(int arr[],int n,int element){
	int i,min,mid,max;
	min=0;
	max=n-1;
	mid=(min+max)/2;
	while(min<=max){
	if(arr[mid]==element){
		return mid;
	}
	if(arr[mid]>element){
		max=mid-1;
	}
	else{
		min=mid+1;
	}
	
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
	insertionSort(arr,n);
	printf("Enter the Value You want to Search : ");
	scanf("%d",&element);
	int searchIndex=binarySearch(arr,n,element);
	printf("The %d is found in %d no. index",element,searchIndex);
	
	
}
