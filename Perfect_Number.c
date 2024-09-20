#include<stdio.h>
int main(){
	int n,result=0,original;
	printf("Enter a number: ");
	scanf("%d",&n);
	original=n;
	for(int i=1;i<n;i++){
		if(n%i==0){
			result+=i;
		}
	}
	if(original==result){
		printf("This is Perfect Number");
	}
	else{
		printf("This is not a Perfect Number");
	}
}