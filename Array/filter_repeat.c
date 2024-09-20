#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*a,*b,flag,k=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    b=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        printf("Enter element a[%d]\n:\t",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        flag=0;
        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            b[k]=a[i];
            k++;
        }
    }
    n=k;
    for(int l=0;l<n;l++){
        a[l]=b[l];
    }
    printf("The array with unique values are : \n");
     printf("%d\n",a[4]);
    for(int l=0;l<n;l++){
        printf("a[%d]=%d\n",l,a[l]);
    }

}