#include<stdio.h>
#include<string.h>
int main(){
    char str[100],reverse[100];
    printf("Enter a string: ");
    gets(str);
    int length=strlen(str);
    for(int i=0,j=length-1;j>=0;i++,j--){
        reverse[i]=str[j];
    }
    reverse[length]='\0';
    if(strcmp(str,reverse)==0){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;
}
