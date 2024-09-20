#include<stdio.h>
int main(){
    int n1,n2,n3,n4 ,min;
    printf("Enter Your 1st Number : ");
    scanf("%d",&n1);
    printf("Enter Your 2nd Number : ");
    scanf("%d",&n2);
    printf("Enter Your 3rd Number : ");
    scanf("%d",&n3);
    printf("Enter Your 4th Number : ");
    scanf("%d",&n4);
    if(n1==n2 && n1==n3 && n1==n4){
        printf("All number is Equal");
    }
    else{
    if(n1<n2){
        if(n1<n3){
            if(n1<n4){
                min=n1;
            }
            else{
                min=n4;
            }
        }
        else{
            if(n3<n4){
                min=n3;
            }
            else{
                min=n4;
            }
        }
    }
    else{
        if(n2<n3){
            if(n2<n4){
                min=n2;
            }
            else{
                min=n4;
            }
        }
        else{
            if(n3<n4){
                min=n3;
            }
            else{
                min=n4;
            }
        }
    }
}
    printf("Minimum Number is : %d",min);
}

    