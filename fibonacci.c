#include<stdio.h>
int main(){
    int n,prev=0,curr=1;
    printf("Enter the Value : ");
    scanf("%d",&n);
    printf("%d\n%d\n",prev,curr);
    for(int i=2;i<n;i++){
        int next=prev+curr;
        printf("%d\n",next);
        prev=curr;
        curr=next;
        
    }
    
}