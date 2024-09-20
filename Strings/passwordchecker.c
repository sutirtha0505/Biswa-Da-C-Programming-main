#include <stdio.h>
#include <string.h>

int main(){
    char password[100];
    int capital=0,small=0,number=0,special=0;
    printf("Enter Your Passphrase : ");
   scanf("%[^\n]s",password);
    for(int i=0;password[i]!='\0';i++){
        if(password[i]>=65&&password[i]<=90){
            capital++;
        }
        else if(password[i]>=97&&password[i]<=122){
            small++;
        }
        else if(password[i]=='!' || password[i]=='@' || password[i]=='#'|| password[i]=='$'|| password[i]=='%' || password[i]=='&'|| password[i]=='*'|| password[i]=='^'){
            special++;
        }
        else if(password[i]>=48 && password[i]<=57){
            number++;
        }

    }
    if(strlen(password)>=6 && special>=1 && small>=1 && capital>=1 && number>=1){
        printf("Password is Strong");
    }
    else{
        printf("Password is Weak");
    }
}
