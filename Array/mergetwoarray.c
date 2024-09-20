#include<stdio.h>

int main(){
		int n,i,A[100],B[100],C[100],j=0,m;
	// take the input size of an array
	printf("Enter the size of an array A: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the value of position A[%d] : ",i);
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		printf("The value of position A[%d] : %d \n",i,A[i]);
	}
	printf("Enter the size of an array B: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("Enter the value of position B[%d] : ",i);
		scanf("%d",&B[i]);
	}
	for(i=0;i<m;i++){
		printf("The value of position B[%d] : %d \n",i,B[i]);
	}
	for(i=0;i<n;i++){
	 C[j]=A[i];
	 j++;	
	}
	for(i=0;i<m;i++){
	 C[j]=B[i];
	 j++;	
	}
	for(i=0;i<j;i++){
		printf("The value of C[%d] : %d \n",i,C[i]);
	}
	
}
