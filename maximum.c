#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter Your 1st Number : ");
    scanf("%d",&n1);
    printf("Enter Your 2nd Number : ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d is Greater Than %d",n1,n2);
    }
    elseif(n1==n2){
        printf("%d is Equal To %d",n1,n2);
    }
    else{
        printf("%d is Greater Than %d",n2,n1);
    }
    return 0;
}