#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First Number is %d\n",a);
    printf("Second Number is %d",b);
    return 0;

    
}