#include <stdio.h>
#include <math.h>
int main(){
    int n1,n2,choice;
    float result;
    printf("--------------------Menu --------------------\n");
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Power\n");
    printf("Enter Your Choice : ");
    scanf("%f",&choice);
    if(choice>=1 && choice<=5){
        printf("Enter First Number : ");
        scanf("%f",&n1);
        printf("Enter Second Number : ");
        scanf("%f",&n2);
    }
    switch(choice){
        case 1:
            result=n1+n2;
            printf("The addition of %f and %f is %.2f",n1,n2,result);
            break;
        case 2:
            result=n1-n2;
            printf("The Subtraction of %f and %f is %.2f",n1,n2,result);
            break;
        case 3:
            result=n1*n2;
            printf("The Multiplication of %f and %f is %.2f",n1,n2,result);
            break;
        case 4:
            result=(float)n1/n2;
            printf("The Division of %f and %f is %.2f",n1,n2,result);
            break;
        case 5:
            result=pow(n1,n2);
            printf("The %f to the power %f is %.2f",n1,n2,result);
            break;
        default:
            printf("Invalid Choice");
            break;
    }
    // if(choice>=1 && choice<=5){
    //     printf("Result : %.2f",result);
    // }
    return 0;
}