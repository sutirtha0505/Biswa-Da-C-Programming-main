#include<stdio.h>
#include<math.h>
int main(){
	int n,digit,original,result=0,count=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	original=n;
	while(n>0){
		n=n/10;
		count++;
	}
	n=original;
	while(n>0){
		digit=n%10;
		n=n/10;
		result+=pow(digit,count);
	}
	if(result==original){
		printf("This is a armstrong Number");
	}
	else{
		printf("This is not a armstrong Number");
	}
	return 0;
}