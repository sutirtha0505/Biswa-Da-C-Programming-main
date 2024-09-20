#include <stdio.h>

int main(){
	int n,i,pos,arr[100],value;
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
	printf("Enter the position you want to delete : ");
	scanf("%d",&pos);
	//replacing the values with their new location
	for(i=pos-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}

	n--;
	//new array after delete elemment
	for(i=0;i<n;i++){
	printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
}
