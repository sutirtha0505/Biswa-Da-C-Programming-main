#include<stdio.h>
int sum(int x,int y){
    int add=x+y;
    return add;
}
int main(){
    int a,b;
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("Enter another Number : ");
    scanf("%d",&b);
    printf("addition of %d and %d is: %d",a,b,sum(a,b));
}