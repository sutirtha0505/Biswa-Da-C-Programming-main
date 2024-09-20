#include<stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("Enter Your 1st Number : ");
    scanf("%d",&n1);
    printf("Enter Your 2nd Number : ");
    scanf("%d",&n2);
    printf("Enter Your 3rd Number : ");
    scanf("%d",&n3);
    if(n1==n2 && n1==n3){
        printf("all number is equal");
        
    }
    else{
    if(n1>n2 && n1>n3){
        max=n1;
    }
    elseif(n2>n3 && n2>n1){
        max=n2;
    }
    else(){
        max=n3;
    }
    printf("%d is Greater",max);
    }
    // else{
    //     if(n1>n2){
    //     if(n1>n3){
    //         printf("%d is Greater",n1);
    //     }
    //     else{
    //         printf("%d is Greater",n3);
    //     }
    // }
    // else{
    //     if(n2>n3){
    //         printf("%d is Greater",n2);
    //     }
    //     else{
    //         printf("%d is Greater",n3);
    //     }
    // }
    // }
    
    
    return 0;
}