#include<stdio.h>
int main(){
	int A,B;
	printf("----------------Fate Decider---------------\n");
	printf("Full Marks: 100\n");
	printf("Enter Marks of the Subject A : ");
	scanf("%d",&A);
	printf("Enter Marks of the Subject B : ");
	scanf("%d",&B);
	if(A>=55 && B>=45 || A<55 && A>=45 && B>=55){
		printf("Pass");
	}
	else if(B<45 && A>=65){
		printf("You have to reappear in an Examination in B to qualify");
	}
	else{
		printf("Asche Bochor Abar Hbe!!");
	}
	return 0;
}