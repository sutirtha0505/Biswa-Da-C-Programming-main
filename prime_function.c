#include<stdio.h>
int  swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
int main(){
    int a=9;
    int b=10;
    int *c=&a;
    int **e=&c;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%d\n",*c);
    printf("%p\n",c);
    printf("%p\n",&c);
    printf("%p\n",e);
    printf("%d\n",**e);
    printf("%p\n",*e);


}
