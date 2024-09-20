#include <stdio.h>
int main(){
    int marks[4][8]={
        {12,44,55,78,98,87,99,32},
        {21,32,56,78,9,43,26,75},
        {45,67,25,48,34,92,46,36},
        {21,32,56,78,9,43,26,75}
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            printf("The value stored in %d,%d is %d \n",i,j,marks[i][j]);
        }
        printf("\n");
    }
}
