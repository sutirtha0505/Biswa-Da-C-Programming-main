#include<stdio.h>
int factorial(int num){
int fact=1;
for(int i=1;i<=num;i++){
	fact=fact*i;

}
return fact;
}
int main(){
 int original,n,digit,result=0;
 printf("Enter The Number : ");
 scanf("%d",&original);
 n=original;
 while(n>0){
 	digit=n%10;
 	result=result+factorial(digit);
 	n=n/10;
 }
 if(result==original){
	printf("This is a Krisnamurthy Number\n");
 }
 else{
 	printf("This is not a Krisnamurthy Number\n");
 }
 return 0;
}
