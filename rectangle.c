#include<stdio.h>
int main(){
    int l,w;
    printf("Enter the length of the side: ");
    scanf("%d",&l);
    printf("Enter the width of the side: ");
    scanf("%d",&w);
    int area =w*l;
    int perimeter=2*(w+l);
    printf("The area of the rectangle is :%d",area);
    printf("The Perimeter of the rectangle is :%d",perimeter);
    return 0;
}