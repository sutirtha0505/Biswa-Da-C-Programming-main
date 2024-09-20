#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d is a Prime Number",n);
	}
	else if(count==1){
		printf("%d is not a prime nor Composite Number")
	}
	else{
		printf("%d is a Composite Number",n);
	}
	return 0;
}
