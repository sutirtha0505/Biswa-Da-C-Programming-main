#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter Your Text: ");
    scanf("%[^\n]s",str);
    
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
        else if(str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    printf("Converted string: %s\n",str);
}
