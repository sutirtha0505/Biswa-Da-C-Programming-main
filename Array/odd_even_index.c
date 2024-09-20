#include<stdio.h>
int main(){
   int a[10],n;
    printf("How many number do you want to add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0) a[i]+=10;
        else a[i]*=2;
        printf("%d\t",a[i]);
    }

}