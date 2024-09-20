#include<stdio.h>
int ways(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 4;
    }
    
    return ways(n-1)+ways(n-2)+ways(n-3);
}

int main(){
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    printf("The number of possible ways to go up is : %d",ways(a));
    return 0;
}
