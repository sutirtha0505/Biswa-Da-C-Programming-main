#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    printf("Enter Your Text: ");
    scanf("%[^\n]s",str);
    printf("Entered string: %s\n",str);
    for(int i=0;str[i]!=NULL;i++){
        printf("%c",str[i]);
    }
}