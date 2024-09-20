#include<stdio.h>
int main(){
	printf("############_Discount Checker_############\n");
	float price,Discount,FP;
	printf("Enter Your Price : ");
	scanf("%f",&price);
	if(price>=5000 && price<=9999){
		Discount=(price*5)/100;
		FP=price-Discount;
		printf("Your Discount is %.2f\n  Final Price is %.2f",Discount,FP);
	}
	else if(price>=10000 && price<=19999 ){
		Discount=(price*10)/100;
		FP=price-Discount;
		printf("Your Discount is %.2f\n  Final Price is %.2f",Discount,FP);
	}
	else if(price>=20000 && price<=39999 ){
		Discount=(price*15)/100;
		FP=price-Discount;
		printf("Your Discount is %.2f\n  Final Price is %.2f",Discount,FP);
	}
	else if(price>=40000 && price<=49999 ){
		Discount=(price*20)/100;
		FP=price-Discount;
		printf("Your Discount is %.2f\n  Final Price is %.2f",Discount,FP);
	}
	else if(price>=50000 ){
		Discount=(price*25)/100;
		FP=price-Discount;
		printf("Your Discount is %.2f\n  Final Price is %.2f",Discount,FP);
	}
	else{
		printf("You are not eligible for this offer");
	}
return 0;

}