#include<stdio.h>
#include<malloc.h>
int main(){
    int n,*a,*b,flag;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    b=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        printf("Enter element a[%d]\n:\t",i);
        scanf("%d",&a[i]);
    }
    for(int i=0,k=0; i<n; i++){
        int count=0;
        flag=0;
        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(int k=i; k<n; k++){
                if(a[i]==a[k]){
                    count++;
                }
            }
            printf("The %d element occurs %d times in the array.\n",a[i],count);
            b[k]=a[i];
            k++;
        }
    }

}