#include<stdio.h>
void swap(int x[]){
 int temp=x[0];
 x[0]=x[1];
 x[1]=temp;
 return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\t%d\n",arr[0],arr[1]);
    swap(arr);
    printf("%d\t%d\n",arr[0],arr[1]);
    return 0;
}