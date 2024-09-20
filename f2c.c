#include<stdio.h>
int main(){
    float celcius,farenheit;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&farenheit);
    celcius=((farenheit-32)*5)/9;
    printf("The value in Celsius is : %f",celcius);
    return 0;
}
