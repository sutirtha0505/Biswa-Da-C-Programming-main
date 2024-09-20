#include<stdio.h>
int prime(int num){

	int count=0,prime;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2){
		prime=1;
	}
	else{
		prime=0;
	}
	return prime;
}
int main(){
	int a,b,sum=0;
	printf("Enter the starting Number : ");
	scanf("%d",&a);
	printf("Enter the ending Number : ");
	scanf("%d",&b);
	for(int i=a; i<=b;i++){
		if(prime(i)==0){
			sum+=i;
		}
	}
	printf("Sum Of non prime Number between %d and %d is %d",a,b,sum);
	return 0;
}