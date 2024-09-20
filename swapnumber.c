#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("First Number is :%d\n",a);
    printf("second Number is :%d",b);
    return 0;
}