#include<stdio.h>
int main(){
	int original,n,digit,result=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	original=n;
	while(n>0){
		digit=n%10;
		
		result=(result*10)+digit;
		n=n/10;
	}
	
	if(original==result){
		printf("This is a Palindrome Number");
	}
	else{
		printf("This is not a Palindrome Number");
	}
	return 0;
}