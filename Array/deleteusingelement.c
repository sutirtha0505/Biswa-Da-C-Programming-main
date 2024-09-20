#include <stdio.h>

int main(){
	int n,i,arr[100],value,j;
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
	printf("Enter the element do you want to delete : ");
	scanf("%d",&value);
	//replacing the values with their new location
	for(i=0;i<n;){
		if(arr[i]==value){
			for(j=i;j<n-1;j++){
				arr[j]=arr[j+1];
			}
	
				n--;
		}
		else{
			i++;
		}
	}
	
	//new array after delete elemment
	for(i=0;i<n;i++){
	printf("The value of position array[%d] : %d \n",i,arr[i]);
	}
	
	
	
	
}
