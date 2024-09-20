#include<stdio.h>
#include<malloc.h>
int linearSearch(int a[],int n,int key){
    int flag=0,searchIndex;
for(int i=0;i<n;i++){
    if(a[i]==key){
        flag=1;
        searchIndex=i;
        break;
    }
}
    if(flag==1){
        printf("%d is found in index no: %d",key,searchIndex);
    }
    else{
        printf("%d is not found in the array",key);
    }
}
int main(){
    int n,*a,*b,key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    b=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        printf("Enter element a[%d]\n:\t",i);
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched in array b:\n");
    scanf("%d",&key);
    linearSearch(a,n,key);
}