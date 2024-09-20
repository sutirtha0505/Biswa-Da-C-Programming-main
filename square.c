#include<stdio.h>
int main(){
    int l;
    printf("Enter the length of the side: ");
    scanf("%d",&l);
    int area =l*l;
    int perimeter=4l;
    printf("The area of the Square is :%d",area);
    printf("The Perimeter of the Square is :%d",perimeter);
    
    return 0;
}