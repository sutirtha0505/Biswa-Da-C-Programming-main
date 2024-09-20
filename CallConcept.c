#include<stdio.h>
void callAddress(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void callValue(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
printf("The value after Swapping %d %d\n",a,b);
}
int main(){
int a,b,choice;
printf("Enter the value of A : ");
scanf("%d",&a);
printf("Enter the value of B : ");
scanf("%d",&b);
printf("Choose Your Preferred option of Swapping");
printf("\n1.Call by Address\n2.Call By Value\n");
scanf("%d",&choice);
switch(choice){
case 1:callAddress(&a,&b);
      printf("The value after Swapping %d %d\n",a,b);
      break;
case 2: callValue(a,b);
        break;
}
}
