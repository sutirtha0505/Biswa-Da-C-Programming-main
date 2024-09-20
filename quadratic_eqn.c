#include <stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter The value of a : ");
	scanf("%d",&a);
	printf("Enter The value of b : ");
	scanf("%d",&b);
	printf("Enter The value of c : ");
	scanf("%d",&c);
	float discriminant=(float)(b*b-4*a*c);
	if(discriminant>=0){
		//real roots;
		float r1=(-b+sqrt(discriminant))/2*a;
		float r2=(-b-sqrt(discriminant))/2*a;
		printf("The root values are %.2f and %.2f",r1,r2);
	}
	else{
		float real_part=(float)-b/2*a;
		float imaginary_part=(float)sqrt(-discriminant)/2*a;
		printf("The root value is %.2f+%.2fi and %.2f-%.2fi"real_part,imaginary_part,real_part,imaginary_part);
	}

	return 0;
}