#include<stdio.h>
int main(){
    float celcius,farenheit;
    printf("Enter Temperature in Celsius : ");
    scanf("%f",&celcius);
    farenheit=celcius*(9/5)+32;
    printf("The value in Fahrenheit is ; %f",farenheit);
    return 0;
}
