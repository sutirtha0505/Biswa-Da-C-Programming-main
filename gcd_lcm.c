#include<stdio.h>
int main(){
    int n1,n2,gcd,lcm;
    printf("Enter Your first Number:  ");
    scanf("%d",&n1);
    printf("Enter Your Second Number:  ");
    scanf("%d",&n2);
    for(int i=1;i<=n1||i<=n2;i++){
        if(n1%i==0&&n2%i==0){
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    printf("GCD and LCM of %d and %d is",gcd,lcm);
}