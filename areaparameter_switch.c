#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    float height,width,s1,s2,s3,r,result,area,perimeter,semiperimeter;
    printf("-----------------------Menu --------------------\n");
    printf("\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1 :printf("Enter You Side:");
                scanf("%f",&s1);
                area=pow(s1,2);
                perimeter=4*s1;
                printf("Area=%.2f\nPerimeter=%.2f\n",area,perimeter);
                break;
        case 2 :printf("Enter You height:");
                scanf("%f",&height);
                printf("Enter You width:");
                scanf("%f",&width);
                area=height*width;
                perimeter=2*(height+width);
                printf("Area=%.2f\nPerimeter=%.2f\n",area,perimeter);
                break;
        case 3 :printf("Enter You Side:");
                scanf("%f",&s1);
                printf("Enter You Side:");
                scanf("%f",&s2);
                printf("Enter You Side:");
                scanf("%f",&s3); 
                perimeter=s1+s2+s3;
                semiperimeter=perimeter/2;
                area=pow(semiperimeter*(semiperimeter-s1)*(semiperimeter-s2)*(semiperimeter-s3),0.5);
                printf("Area=%.2f\nPerimeter=%.2f\n",area,perimeter);
                break;
        case 4 :printf("Enter Your Radius : ");
                scanf("%f",&r);        
                float pi = 3.14159265359;
                area=pi*pow(r,2);
                perimeter=2*pi*r;
                printf("Area=%.2f\nPerimeter=%.2f\n",area,perimeter);
                break;
        default :printf("Invalid Choice");
    }
}