#include <stdio.h>
int result(int n){
    if(n==0) return 1;
    printf("%d",n);
    return result(n-1);
}
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    result(n);
    return 0;
}