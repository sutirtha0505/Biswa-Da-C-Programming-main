#include <stdio.h>
int isPrime(int n){
	int i,flag=0;
	for(i=2;i<n;i++){
		if(n%i==0){
		flag++;	
		}
	}
	if(flag==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n,i,arr[100],sum=0;
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
		if(isPrime(arr[i])){
			sum+=arr[i];
		}
	}
	printf("The sum of Prime number is : %d",sum);
}
