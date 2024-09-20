#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter Your 1st Number : ");
    scanf("%d",&n1);
    printf("Enter Your 2nd Number : ");
    scanf("%d",&n2);
    printf("Enter Your 3rd Number : ");
    scanf("%d",&n3);
    (n1==n2 && n3==n1)?
    printf("All numbers are equal"):
    (n1<n2)?
    (n1<n3)?
    printf("%d is minimum",n1):
    printf("%d is minimum",n3):
    (n2<n3)?
    printf("%d is minimum",n2):
    printf("%d is minimum",n3);
}