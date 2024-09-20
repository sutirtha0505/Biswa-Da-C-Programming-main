#include <stdio.h>
#include <math.h>

int main()
{
    double s1, s2, s3;
    printf("Enter First Side : ");
    scanf("%lf", &s1);
    printf("Enter Second Side : ");
    scanf("%lf", &s2);
    printf("Enter Third Side : ");
    scanf("%lf", &s3);

    double perimeter = s1 + s2 + s3;
    double sp = perimeter / 2;
    double area = pow((sp * (sp - s1) * (sp - s2) * (sp - s3)), 0.5);
    printf("Perimeter of the Triangle is : %.2lf\n", perimeter);
    printf("Area of the Triangle is :%.2lf\n", area);
    return 0;
}