#include<stdio.h>
#include<stdlib.h>
int main(){
    int  *ptr;
    int a=10;
    ptr=&a;
    free(ptr);
    printf("%p\n",ptr);
}
