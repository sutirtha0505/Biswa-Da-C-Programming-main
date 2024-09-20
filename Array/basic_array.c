#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int n;
    printf("How many number do you want: ");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("How many number do you want: ");
    scanf("%d",&n);
    a=(int *)realloc(a,n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
