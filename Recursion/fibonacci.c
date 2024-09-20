#include <stdio.h>
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
   int result=fibo(n-1)+fibo(n-2);
   return result;
}
int main(){
    int n;
    printf("Enter Your Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",fibo(i));
    }
}
