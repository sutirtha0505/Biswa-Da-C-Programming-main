#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    float pi = (float)3.14;
    float area = pi * r * r;
    float perimeter = 2 * pi * r;
    printf("The area of the circle is :%f\n", area);
    printf("The Perimeter of the circle is :%f\n", perimeter);
    return 0;
}
