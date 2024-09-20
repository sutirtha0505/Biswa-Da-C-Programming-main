#include<stdio.h>
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
int linearSearch(int arr[],int n,int element){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==element)
		return i;
	}
	return -1;
}
int main(){
	int n,arr[100],i,element,searchIndex,choice;
	printf("1.linearSearch\n2.binarySearch(you have to enter sorted array)\n3.Exit\n");
	printf("Enter Your Choice: ");
	scanf("%d",&choice);
	
	
	switch(choice){
		case 1: 
				printf("Enter the size of an array : ");
				scanf("%d",&n);	
				for(i=0;i<n;i++){
					printf("Enter the value of position array[%d] : ",i);
					scanf("%d",&arr[i]);
				}
				printf("Enter the Value You want to Search : ");
				scanf("%d",&element);
				searchIndex=linearSearch(arr,n,element);
				printf("The %d is found in %d no. index",element,searchIndex);
				break;
		case 2: 
				printf("Enter the size of an array : ");
				scanf("%d",&n);	
				for(i=0;i<n;i++){
					printf("Enter the value of position array[%d] : ",i);
					scanf("%d",&arr[i]);
				}
				printf("Enter the Value You want to Search : ");
				scanf("%d",&element);
				searchIndex=binarySearch(arr,n,element);
				printf("The %d is found in %d no. index",element,searchIndex);
				break;
		default: break;	
	}
}
