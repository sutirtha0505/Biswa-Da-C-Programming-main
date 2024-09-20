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
	printf("Enter the position where you want tod add : ");
	scanf("%d",&pos);
	printf("Enter the number which you want to add : ");
	scanf("%d",&value);
	//replacing the values with their new location
	for(i=n;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	//assign the value in the position
	arr[pos-1]=value;
	n++;
	//new array after add an extra elemment
	for(i=0;i<n;i++){
	printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
	
	
	
	
}
