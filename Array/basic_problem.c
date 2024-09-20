#include <stdio.h>
int main(){
    int a[10],n;
    printf("How many number do you want to add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<35){
            printf("\n%d",i);
        }
    }
   

}