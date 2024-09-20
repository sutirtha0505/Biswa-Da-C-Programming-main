#include<stdio.h>
int main(){
    int n1,n2,n3,n4,min;
    printf("Enter Your 1st Number : ");
    scanf("%d",&n1);
    printf("Enter Your 2nd Number : ");
    scanf("%d",&n2);
    printf("Enter Your 3rd Number : ");
    scanf("%d",&n3);
    printf("Enter Your 4th Number : ");
    scanf("%d",&n4);
    min=(n1<n2 && n1<n3 && n1<n4)?n1:(n2<n1 && n2<n3 && n2<n4)?n2:(n3<n1 && n3<n2 && n3<n4)?n3:n4;
    printf("Minimum Number is : %d",min);
    }