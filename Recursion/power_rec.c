#include <stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    int result =a*power(a,b-1);
   return result;
}

int main(){
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    int result=power(a,b);
    printf("%d raised to the power %d is : %d",a,b,result);
}